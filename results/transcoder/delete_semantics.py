import os
import subprocess
from os import listdir
import time
from tqdm import tqdm
import shutil
import re


dir = "./java/"
benchmarks = [dir + f for f in listdir(dir)]
cpps = list(filter(lambda x: x.endswith(".cpp"), benchmarks))

for cpp in cpps:
    print(cpp)
    out = cpp[:-4] + ".out"
    txt = cpp[:-4] + ".txt"

    if out not in benchmarks:  # syntax error
        shutil.move(cpp, os.path.join(dir, "syntax"))
    else:
        with open(txt, "r") as f1:
            content = f1.read()
            if "Results: 10, 10" in content:
                continue
            else:
                shutil.move(cpp, os.path.join(dir, "semantics"))
