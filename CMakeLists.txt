#------------------------------------------------------------------------------
# CLING - the C++ LLVM-based InterpreterG :)
#
# This file is dual-licensed: you can choose to license it under the University
# of Illinois Open Source License or the GNU Lesser General Public License. See
# LICENSE.TXT for details.
#------------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.12)
# Building as separate project.

project(Simple)

add_subdirectory(src)

# This project needs cling.