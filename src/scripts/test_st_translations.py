from os import listdir
import re

ground = "/Users/anon/PycharmProjects/SBFL_CPP/ground_truths/geeks_for_geeks_successful_test_scripts/cpp/"
f_filled = "/Users/anon/PycharmProjects/SBFL_CPP/playground/translations/java/"
files = filter(lambda x: x.endswith(".cpp") != -1, listdir(ground))
for file in files:
    with open(ground + file, "r") as f1:
        java_file = file
        with open(f_filled + java_file, "r") as f2:
            truth = f1.read()
            candidate = f2.read()
            print(candidate)

            with open("./transcoder_java/" + file, "w+") as f3:
                match = re.match(r"[\w ]+ (\w+) ?\(", candidate)
                if match:
                    name = match.group(1)
                else:
                    match = re.match(r"public : [\w ]+ (\w+) ?\(", candidate)

                candidate = candidate.replace(name, "f_filled")
                res = truth.replace("//TOFILL", candidate)
                f3.write(res)
