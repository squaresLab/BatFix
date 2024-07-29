import os

dir = "/Users/anon/PycharmProjects/SBFL_CPP/transcoder-st/java/results/sbfl/"
files = os.listdir(dir)


ground_truths_path = (
    "/Users/anon/PycharmProjects/SBFL_CPP/transcoder-st/java/sbfl/java_annotations"
)
correct = 0
for file in files:
    with open(os.path.join(ground_truths_path, file)) as f1:
        with open(os.path.join(dir, file)) as f2:
            res = f1.read().split(" ")
            e = int(res[1])
            e_prime = int(f2.read().split("\n")[0])
            if e == e_prime - 1:  # because of foo
                correct += 1


print(correct)
