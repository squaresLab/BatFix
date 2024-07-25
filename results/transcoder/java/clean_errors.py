import os
import shutil

dir = "./semantics"
bad_tests = "/Users/anon/Desktop/Dev.nosync/Java2CPP/benchmarks/bad_tests"
cur_data = "/Users/anon/PycharmProjects/SBFL_CPP/transcoder/java_annotations"

files = os.listdir(dir)

error_clean = True

if error_clean:
    for file in files:
        if file not in os.listdir(cur_data):
            print(file)
            # os.remove(os.path.join(cur_data, file))

else:
    for file in files:
        if file not in os.listdir(cur_data):
            print(os.path.join(dir, file))


# comby "for(int i = 0; i < param0.size(); ++i) { if(:[b]) ... }" "assert(argc > 1); int i = atol(argv[1]); return :[b]"
# comby  "assert(argc > 1); int i = atol(argv[1]); return :[b]" "assert(argc > 1); int i = atol(argv[1]); assert(i < param0.size()); return :[b];"  .cpp