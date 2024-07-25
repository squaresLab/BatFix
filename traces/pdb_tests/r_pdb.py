import subprocess
import sys
import fcntl
import os
import pexpect
import re
import time
import argparse
import ast

parser = argparse.ArgumentParser(description='Pytho Exec Trace.')
parser.add_argument('-f', '--file_name', type=str,
                    help='an integer for the accumulator')


args = parser.parse_args()

compile_cmd = f"python -m pdb {args.file_name}"
cmd = pexpect.spawn(compile_cmd)

cmd.sendline(f"b f_gold\n")
cmd.expect("Breakpoint.*[0-9]")
cmd.sendline(f"c")
cmd.expect("> .*\n->.*\n")
local_vars = ""

step_lst = []

while "__return__" not in local_vars:
    res = cmd.after.decode()
    regex = re.compile(r"> .*\(([0-9]+)\).*\n-> (.*)")
    cmd.sendline("locals()")
    cmd.expect("{.*}")
    local_vars = cmd.after.decode()
    step_lst.append((regex.search(res).group(2), regex.search(res).group(1), ast.literal_eval(local_vars)))
    cmd.sendline(f"step")
    cmd.expect("> .*\n->.*\n")

for stmt, lineno, variables in step_lst:
    stmt = stmt.replace("\r", "")
    lineno = lineno.replace("\r", "")

    print(f"Statement: {stmt}", end="\n")
    print(f"Line: {lineno}", end="\n")
    for variable in variables:
        print(f"{variable} = {variables[variable]}", end="\n")
    print()




