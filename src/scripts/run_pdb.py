import os
import subprocess
import sys



def run_jdb():
    files = os.listdir('./')
    files = [fle for fle in files]
    for file in files:
        name = file
        with open("./traces/" + name, 'w') as f:
            print(f"python3 r_pdb.py -f {name}")
            subprocess.run(f"timeout 20 python3 r_pdb.py -f {name}", shell=True, stderr=sys.stderr, stdout=f, cwd=".")

# write_files()
run_jdb()