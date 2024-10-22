# BatFix - TOSEM24

### Note: This replication package is a work in progress. If you need help running the tool, please open an issue


The src contains the code to run BatFix, including CMAKE with all dependencies
necessary to run the code. We will eventually provide a docker container and more precise
instructions on how to use BatFix and replicate our results.

To run BatFix compile the code:
* cmake .

This should generate a binary named "Gen". This is the BatFix executable.
BatFix takes as input three files. (1) The file containing the functions to be fixed,
and sample inputs. (2) Control flow of the oracle program, (3) Execution trace of
the oracle program in a failing test case:

Example usage:
```bash
./Gen
  -f {buggy transpiled program}
  -g {control flow graph of the source program}
  -t {execution trace on a failing test case on the source program}
```
### CFG file format


The control-flow graphs files follow a custom format. Each file should be formatted as follows:

> Nodes \
node number; node type; statement; line number; \
Edges \
origin node - 1; destination node

* Example:

>Nodes\
1;special;;;\
2;statement;return -(~foo_1);14;\
3;exit;;;\
Edges\
0;2;\
1;3;\
2;


### Execution traces format

The execution traces follow the following format:

> Statement: {statement source code} \
Line: {line number} \
Var1 = {var1 content} \
Var2 = {var2 content}

* Example:

> Statement: int len = N . length ( ) ; \
Line: 14 \
N = "ZCoQhuM" \
\
Statement: int l = ( len ) / 2 ; \
Line: 15 \
N = "ZCoQhuM" \
len = 7 \
\
Statement: int count = 0 ; \
Line: 16 \
N = "ZCoQhuM" \
len = 7 \
l = 3


For each model there's a folder containing all the buggy translations (separated by syntax
and semantics as indicated in the paper). Each folder also contains the patched generated by BatFix for
both languages.
