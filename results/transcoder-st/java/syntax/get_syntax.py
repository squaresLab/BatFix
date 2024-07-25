import os
import subprocess
from os import listdir
import time
cmd = './cmake-build-debug/src/Gen -f {} -g {}'

path = '/Users/anon/PycharmProjects/SBFL_CPP/playground/java/'
benchmarks = [f for f in listdir(path)]

cpps = list(filter(lambda x: x.endswith('.cpp'), benchmarks))


i = 0
for cpp in cpps:
    print(cpp)
    out = cpp[:-4] + ".out"
    txt = cpp[:-4] + ".txt"

    if out not in benchmarks:
        with open(f"./{cpp}", "w+") as fw:
            with open( path + cpp, "r") as fr:
                fw.write(fr.read())


# Calculate the sho