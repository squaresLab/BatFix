import os
import json

path = "/Users/anon/PycharmProjects/SBFL_CPP/transcoder/"

java_files = list(filter(lambda x: ".java" in x, os.listdir(path)))
python_files =list(filter(lambda x: ".py" in x, os.listdir(path)))


for file in python_files:
    tmp = file[:file.find(".py")] + ".cpp"
    with open(os.path.join(path, f"py/{tmp}"), "w+") as f1:
        with open(os.path.join(path, file), "r") as f2:
            f1.write(f2.read())
