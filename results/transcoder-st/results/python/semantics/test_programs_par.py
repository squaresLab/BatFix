import os
import subprocess
from os import listdir
import time
from tqdm import tqdm
import argparse
import ast
from itertools import product
import subprocess, os
my_env = os.environ
from subprocess import Popen
import re
import multiprocessing
import random

parser = argparse.ArgumentParser(description='Semantic programs to test.')
parser.add_argument('-d', '--directory', type=str,
                    help='Directory to the semantic programs to test')


args = parser.parse_args()

benchmarks = [args.directory +
              f for f in listdir(args.directory)]




def find_source(name):
    f_name = name[len("program_") + 2 :-4]
    source = f"/Users/anon/Desktop/Dev.nosync/Java2CPP/python2cpp/{f_name}.txt"
    with open(source) as f:
        lines = f.read()
        m = re.search("#Results: ([0-9]*), ([0-9]*)", lines)
        return int(m.group(1))


def pre_process(bee, lines, content, nvm=None, on_fire=0):
    with open(f"/tmp/tmp_{on_fire}.cpp", "w+") as fl:
        fl.write(content)
    p = Popen(f"g++ -std=c++14 /tmp/tmp_{on_fire}.cpp -o /tmp/a_{on_fire}.out", shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    outs, errs = p.communicate()
    m = re.findall(fr'/tmp/tmp_{on_fire}.cpp:([0-9]*):[0-9]*: error:', errs.decode('utf-8'))
    new_lines = [lines[i] for i in range(len(lines)) if str(i+1) not in m]
    trash = [lines[i] for i in range(len(lines)) if str(i+1) in m]
    if m:
        for t in trash:
            if 'env_var_' not in t:
                return 12, nvm
        return pre_process(bee, new_lines, ''.join(new_lines), nvm + "".join(trash), on_fire)
    else:
        return ''.join(new_lines), nvm


def run_n_test(bee, lines, content, env_var=0, on_fire=0) -> int:
    res = 0
    code, nvm = pre_process(bee, lines, content, '', on_fire)
    if code == 12:
        return 12

    idx = 0
    while True:
        if f'env_var_{idx}' not in content:
            break
        idx += 1

    if idx > 2:
        return 12
    lst_idx = [[] for _ in range(idx)]
    for i in range(idx):
        j = 0
        N = 2000
        while j <= N:
            if f'env_var_{env_var} == {j})' not in code and \
                    f'env_var_{env_var} == {j} &&' not in code and \
                    f"env_var_{env_var} == {j})" not in nvm and \
                    f'env_var_{env_var} == {j} &&' not in nvm:
                break
            if f'env_var_{env_var} == {j})' in code or f'env_var_{env_var} == {j} &&' in code:
                lst_idx[i] += [j]
            j += 1

    with open(f"/tmp/tmp_{on_fire}.cpp", "w+") as fl:
        fl.write(code)
    p = Popen(f"g++ -std=c++14 /tmp/tmp_{on_fire}.cpp -o /tmp/a_{on_fire}.out", shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    p.wait()
    maximum = 0
    count = 0
    for i in product(*lst_idx):
        count += 1
        if count % 2000 == 0:
            print(i)
        for j in range(len(i)):
            my_env[f'env_var_{j}'] = str(i[j])

        p = Popen(f"/tmp/a_{on_fire}.out", shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        try:
            outs, errs = p.communicate(timeout=0.1)
            outs = outs.decode('utf-8')
            # print(outs)
            if "#Results: 10, 10" in outs:
                for j in range(len(i)):
                    print(f'env_var_{j} = {str(i[j])}')
                print("SUCCESS", bee)
                return 11
            m = re.search("#Results: ([0-9]*), ([0-9]*)", outs)
            if m:
                maximum = max(int(m.group(1)), maximum)

        except subprocess.TimeoutExpired as e:
            p.kill()
            # print("timeout")

    # print(bee, f"total {maximum}")
    return maximum

nn = 0

def run_bench(b):
    with open(b) as f:
        print(b)
        lines = f.readlines()
        content = ''.join(lines)
        now = run_n_test(b, lines, content, on_fire=random.randint(1,1000000))
        if now == 12:
            print("fail", b)
        if now != 11:
            print("there is hope. we had ", "xyz", ", now we have", now, b)


if __name__ == '__main__':
    workers = 8
    with multiprocessing.Pool(processes=workers) as pool:
        pool.map(run_bench, [b for b in benchmarks if ".cpp" in b])
