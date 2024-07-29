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

parser = argparse.ArgumentParser(description="Semantic programs to test.")
parser.add_argument(
    "-d", "--directory", type=str, help="Directory to the semantic programs to test"
)


args = parser.parse_args()

benchmarks = list(
    filter(lambda x: ".cpp" in x, [args.directory + f for f in listdir(args.directory)])
)


def run_semantics(name, code) -> int:

    with open("/tmp/tmp_1.cpp", "w+") as fl:
        fl.write(code)
    p = Popen(
        "g++ -std=c++14 /tmp/tmp_1.cpp -o /tmp/a_1.out",
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
    )
    _, err = p.communicate()
    if p.returncode != 0:
        # print("Fail to compile", name)
        return p.returncode

    p = Popen(
        "/tmp/a_1.out", shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE
    )
    try:
        outs, errs = p.communicate(timeout=5)
        outs = outs.decode("utf-8")
        import re

        result = re.match("#Results: (\d+), (\d+)", outs)
        if result and result.group(1) == result.group(2):
            print("SUCCESS", name)

    except subprocess.TimeoutExpired as e:
        p.kill()
        # print("timeout")


for b in benchmarks:
    with open(b) as f:
        now = run_semantics(b, f.read())
