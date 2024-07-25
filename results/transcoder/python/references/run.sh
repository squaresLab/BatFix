#!/usr/bin/env bash

for i in *.cpp
do
    echo "g++ -std=c++14 $i -o ${i%.cpp}.out"
    g++ -std=c++14 "$i" -o "${i%.cpp}.out"
    ./"${i%.cpp}.out" > "${i%.cpp}.txt"
done
