#!/usr/bin/bash

buildf() {
  j=$1
  FNM=`basename ${j} .cpp`
  BNM=`dirname ${j} | cut -c 6- | sed -e 's![/.]!_!g' `
  echo -e "building "${j}"... (FNM: ${FNM} BNM: ${BNM})"

  cp ${j} build/tmp/${FNM}_tmp.cpp
  # change void main to int main
  sed -i -e 's/void\ main/int\ main/g'\
      build/tmp/"${FNM}"_tmp.cpp
  # add main return
  sed -i -e 's/^}/return\ 0;}/g' \
      build/tmp/"${FNM}"_tmp.cpp
  
  ${CXX} "build/tmp/${FNM}_tmp.cpp" -isystem ${LIB} -o "build/${BNM}_${FNM}.exe" -static -static-libgcc -static-libstdc++
}

CXX=x86_64-w64-mingw32-g++
LIB=`pwd`

mkdir build
mkdir build/tmp

cp iostream.h build/tmp/iostream.h
echo "header path: "${LIB}

if [ -z ${@#} ]; then
  for i in code/*/*/*.cpp; do
    buildf ${i}
  done
elif [ ${@#} == "clean" ]; then
  rm -rf ./build/*
else
  buildf code/${@#}.cpp
fi
