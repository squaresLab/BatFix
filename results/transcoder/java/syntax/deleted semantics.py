import os
import subprocess
from os import listdir
import time
from tqdm import tqdm

cmd = "./cmake-build-debug/src/Gen -f {} -g {}"
path = "/Users/anon/Desktop/Dev.nosync/Java2CPP/transcoder/java/syntax/"
benchmarks = [path + f for f in listdir(path)]
cpps = list(filter(lambda x: x.endswith(".cpp"), benchmarks))


i = 0
for cpp in cpps:
    out = cpp[:-4] + ".out"
    if out in benchmarks:
        # sem = "/Users/anon/Desktop/Dev.nosync/Java2CPP/semantics_tmp/" + cpp.split("/")[-1]
        os.remove(out)
        os.remove(cpp)

# Calculate the sho
