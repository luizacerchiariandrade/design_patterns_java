#!/bin/sh
# Go into the directory where this bash script is contained.
cd `dirname $0`

#compile code
mkdir -p build
cd build
cmake ..
make -j `nproc` $*
