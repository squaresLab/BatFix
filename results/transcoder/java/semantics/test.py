import os


sbfl_res = "/Users/anon/PycharmProjects/SBFL_CPP/transcoder/java/sbfl/"
files = os.listdir(sbfl_res)

for file in files:
    if file not in os.listdir("./"):
        print(file)
