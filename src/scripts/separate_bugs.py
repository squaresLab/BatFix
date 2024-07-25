import os
import subprocess
from os import listdir
import time
import re
cmd = './cmake-build-debug/src/Gen -f {} -g {}'

path = '/Users/anon/PycharmProjects/SBFL_CPP/playground/java_codex/'
benchmarks = [f for f in listdir(path)]

cpps = list(filter(lambda x: x.endswith('.cpp'), benchmarks))


def is_correct(file_name):

    full_path = path + file_name
    with open(full_path, "r") as f:
        text = f.read()
        m = re.search("#Results: ([0-9]*), ([0-9]*)", text)
        if m and m.group(1) == m.group(2):
            return True
        return False


i = 0
for cpp in cpps:
    print(cpp)
    out = cpp[:-4] + ".out"
    txt = cpp[:-4] + ".txt"

    if txt in benchmarks and out in benchmarks:
        if not is_correct(txt):
            with open(f"./{cpp}", "w+") as fw:
                with open(path + cpp, "r") as fr:
                    fw.write(fr.read())


# Calculate the sho