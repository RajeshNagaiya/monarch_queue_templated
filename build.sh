#!/bin/bash
args=("$@")
if [ ! -z ${args[0]} ] && [ ${args[0]} == "clean" ];
then
  echo Initiate clean build
  rm -rf build
fi

echo create build directory:
if [ -d build ]
then
  echo build directory exists
else
  mkdir build
  echo Build directory created
fi
echo Move to build directory:
cd build
cmake ..
make
echo "Build completed"
if [ ! -z ${args[1]} ] && [ ${args[1]} == "test" ];
then
  echo Execute testing:
  ./test
fi