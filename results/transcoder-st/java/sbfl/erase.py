import os

files = os.listdir(".")

for file in files:
    if os.path.exists(f"../syntax/{file}"):
        os.remove(f'./{file}')
    else:
        print('lol')