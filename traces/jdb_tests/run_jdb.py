import os
import subprocess
import sys

folder = "/Users/anon/Documents/Dev.nosync/Java2CPP/results/cleaned_java_syntax_with_semantics"

java = "/Users/anon/Documents/Dev.nosync/Java2CPP/ground_truths/geeks_for_geeks_successful_test_scripts/java/"


def write_files():
    for fle in list(filter(lambda x: x.find(".cpp") != -1, os.listdir(folder))):
        fle = fle[:-4] + ".java"
        jdb_folder = "/Users/anon/Documents/Dev.nosync/Java2CPP/jdb_tests/" + fle

        try:
            with open(java + fle, "r") as f:
                with open(jdb_folder, "w") as f2:
                    f2.write(f.read())
        except:
            pass


def run_jdb():
    files = os.listdir("/Users/anon/Documents/Dev.nosync/Java2CPP/jdb_tests/")
    files = [
        "/Users/anon/Documents/Dev.nosync/Java2CPP/jdb_tests/" + fle for fle in files
    ]
    files = list(filter(lambda x: x.find("FIND_THE_ELEMENT_BEFORE") != -1, files))
    for file in files:
        if file.find(".java") != -1:
            name = file.split("/")[-1][:-5]
            with open(
                "/Users/anon/Documents/Dev.nosync/Java2CPP/jdb_tests/traces/" + name,
                "w",
            ) as f:
                print(f"python3 jdb.py -f {name}")
                subprocess.run(
                    f"python3 jdb.py -f {name}",
                    shell=True,
                    stderr=sys.stderr,
                    stdout=f,
                    cwd=".",
                )


# write_files()
run_jdb()
