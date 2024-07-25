
# Keep symbols for JIT resolution
set(LLVM_NO_DEAD_STRIP 1)

# Cling needs at least C++11; so does this demo.
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-fno-rtti)

set(ENV{Clang_DIR} /Users/anon/Documents/Dev.nosync/llvm-project/build)
set(ENV{LLVM_DIR} /Users/anon/Documents/Dev.nosync/llvm-project/build)



find_package(Clang REQUIRED CONFIG)
find_package(LLVM REQUIRED CONFIG)


message(STATUS "Found Clang in ${CLANG_INSTALL_PREFIX}")
message(STATUS "Found Cland headers in ${CLANG_INCLUDE_DIRS}")
message(STATUS "Found LLVM headers in ${LLVM_INCLUDE_DIRS}")


set(lldb_c "/Users/anon/Documents/Dev.nosync/llvm-project/lldb/include;/Users/anon/Documents/Dev.nosync/llvm-project/build/tools/lldb/include")
include_directories(${LLVM_INCLUDE_DIRS} ${CLANG_INCLUDE_DIRS} ${lldb_c})
link_directories(${LLVM_INSTALL_PREFIX/lib} ${CLANG_INSTALL_PREFIX/lib})
# The project has one binary:
add_executable(Gen main.cpp CodePreprocessing.cpp JavaGraph.cpp Enumerator.cpp ClangVisitors.cpp HyperGraph.cpp HyperGraph.h ClangCompressedCFG.cpp ClangCompressedCFG.h MaxSATWrapper.cpp MaxSATWrapper.h ExecutionTraces.h SyntaxErrors.h ClangUtils.h SemanticErrors.h CFGMatchingUtils.h Synthesizer.h)


llvm_map_components_to_libnames(llvm_libs all support core bitreader)

#why
set(lldb_path "/Users/anon/Documents/Dev.nosync/llvm-project/build/lib/liblldb.dylib")

# ...which links against clingInterpreter (and its dependencies).
target_link_libraries(Gen ${llvm_libs} clang clang-cpp ${lldb_path})

# Provide LLVMDIR to cling-demp.cpp:
target_compile_options(Gen PUBLIC -DLLVMDIR="${LLVM_INSTALL_PREFIX}" -I${LLVM_INSTALL_PREFIX}/include)

set_target_properties(Gen
        PROPERTIES ENABLE_EXPORTS 1)

if(MSVC)
    set_target_properties(Simple PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS 1)
    set_property(TARGET Simple APPEND_STRING PROPERTY LINK_FLAGS
            "/EXPORT:?setValueNoAlloc@internal@runtime@cling@@YAXPEAX00D_K@Z
               /EXPORT:?setValueNoAlloc@internal@runtime@cling@@YAXPEAX00DM@Z
               /EXPORT:cling_runtime_internal_throwIfInvalidPointer")
endif()

install(TARGETS Gen RUNTIME DESTINATION /Users/anon/Desktop/Dev.nosync/Java2CPP/build)
