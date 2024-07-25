import subprocess
import sys
import fcntl
import os
import pexpect
import re
import time
import argparse



parser = argparse.ArgumentParser(description='Java Exec Trace.')
parser.add_argument('-f', '--file_name', type=str,
                    help='an integer for the accumulator')

args = parser.parse_args()


compile_cmd = "javac -g --module-path /Users/anon/Documents/Dev.nosync/JavaControlFlow/Data/javafx-sdk-17.0.0.1/lib --add-modules=javafx.base {}"
r = subprocess.run(compile_cmd.format(f"{args.file_name}.java").split(), stdout=subprocess.PIPE, stderr=subprocess.PIPE)

print(r)




compile_cmd = f"jdb {args.file_name}"
cmd = pexpect.spawn(compile_cmd)

cmd.sendline(f"stop at {args.file_name}.f_gold\n")
cmd.expect("It will be set after the class is loaded")
cmd.before.decode()

# fcntl.fcntl(cmd.stdout.fileno(), fcntl.F_SETFL, os.O_NONBLOCK)


cmd.sendline("run\n")
cmd.expect("Breakpoint hit: .*\n(.*)main\[1\]")
regex = re.compile("Breakpoint hit: .*\r\n((.|\r\n)*)main\[1\]")
#step = regex.search(cmd.after.decode())
regex = re.compile(r"line=([0-9]+).*\r\n[0-9]+(.*)\r\n")
step = regex.search(cmd.after.decode())
line_code = step.group(2).strip()
line_number = step.group(1)

print(f"\nStatement: {line_code}\nLine: {line_number}")
cmd.sendline("trace method exit")


# trace method exit

while True:

    try:

        cmd.sendline("locals\n")
        cmd.expect("Method arguments(.*)main\[1\]")
        regex = re.compile(r"Method arguments:\r\n((?:.|\r\n)*)Local variables:((?:.|\r\n)*)\r\nmain\[1\]")
        # regex = re.compile("Method arguments:((.|[\r\n])*)Local variables")
        step = regex.search(cmd.after.decode())
        args = step.group(1) + step.group(2)


        for var in args.split("\r\n"):
            assignment = var.split("=")
            var_name = assignment[0].strip(" ")
            var_value = ''.join(assignment[1:]).strip(" ")

            match = re.search(r"\w\[\]\[([0-9]*)\]", var_value)
            if match:
                max_val = match.group(1)
                concat = ''
                for i in range(int(max_val)):
                    cmd.sendline(f"dump {var_name}[{i}]")
                    cmd.expect("(?:.|\r\n)*" + var_name + "(.|\r\n)*main\[1\]")
                    regex = re.compile(fr"{var_name}\[{i}\] = ((.|\r\n)*)\r\nmain\[1\]")
                    step1 = regex.search(cmd.after.decode())
                    concat += step1.group(1).replace("\r\n", " ") + ", "
                    # print(f"{var_name}[{i}]", "=", step1.group(1).replace("\r\n", " "))
                print(var_name, "=", concat[:-2] + "}")
            elif var_name != '':
                cmd.sendline(f"dump {var_name}")
                cmd.expect("(?:.|\r\n)*" + var_name + "(.|\r\n)*main\[1\]")
                regex = re.compile(fr"{var_name} = ((.|\r\n)*)\r\nmain\[1\]")
                step1 = regex.search(cmd.after.decode())
                print(var_name, "=", step1.group(1).replace("\r\n", " "))






        cmd.sendline("step\n")
        cmd.expect(">(.*)main\[1\]")

        if "exited" in cmd.after.decode():
            break

        regex = re.compile(r".*Step completed: .*\r\n(.*)\r\n")
        step = regex.search(cmd.after.decode())
        regex = re.compile(r"line=([0-9]+).*\r\n[0-9]+(.*)\r\n")
        step = regex.search(cmd.after.decode())
        line_code = step.group(2).strip()
        line_number = step.group(1)

        print(f"\nStatement: {line_code}\nLine: {line_number}")

    except Exception as e:
        print(e)
        break
