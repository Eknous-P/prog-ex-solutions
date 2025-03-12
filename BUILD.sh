#!/usr/bin/bash

CXX=x86_64-w64-mingw32-g++
LIB=`pwd`

mkdir build
mkdir build/tmp

cp iostream.h build/tmp/iostream.h
echo "header path: "${LIB}

for i in code/*/*.cpp; do
  FNM=`basename ${i} .cpp`
  echo "building "${i}"..."

  cp ${i} build/tmp/${FNM}_tmp.cpp
  # change void main to int main
  sed -i -e 's/void\ main/int\ main/g'\
      build/tmp/"${FNM}"_tmp.cpp
  # add main return
  sed -i -e 's/^}/return\ 0;}/g' \
      build/tmp/"${FNM}"_tmp.cpp
  
  ${CXX} "build/tmp/${FNM}_tmp.cpp" -isystem ${LIB} -o "build/${FNM}.exe" -static -static-libgcc -static-libstdc++
done