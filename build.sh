#!/bin/bash
echo "BUILD the linked list programme"
args=("$@")
if [ ! -z ${args[0]} ] && [ ${args[0]} == "clean" ];
then
  echo Performing clean build:
  rm -rf build
fi
if [ -d build ]
then
  echo "directory exists"
else
  echo Build directory does not exists:
  mkdir build
fi
echo enter build directory:
cd build
echo Executing cmake command:
cmake ..
echo Execute build command now:
make
echo "Build completed"
if [ ! -z ${args[1]} ] && [ ${args[1]} == "test" ];
then
  echo "Execute testing sequence"
  ./test
fi