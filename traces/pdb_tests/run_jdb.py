import os
import subprocess
import sys


java = '/Users/anon/Documents/Dev.nosync/Java2CPP/ground_truths/geeks_for_geeks_successful_test_scripts/python/'




def run_jdb():
    files = os.listdir('/Users/anon/Documents/Dev.nosync/Java2CPP/pdb_tests/')
    files = [fle for fle in files]
    for file in files:
        if file.find(".py") != -1 and "fetch" not in file and "r_" not in file and "run_" not in file:
            name = file
            with open("/Users/anon/Documents/Dev.nosync/Java2CPP/pdb_tests/traces/" + name, 'w') as f:
                print(f"python3 r_pdb.py -f {name}")
                subprocess.run(f"python3 r_pdb.py -f {name}", shell=True, stderr=sys.stderr, stdout=f, cwd=".")

# write_files()
run_jdb()