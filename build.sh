#! /bin/bash
THREADS=`grep -c ^processor /proc/cpuinfo`
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
mkdir -p ${DIR}/build
rm -rf ${DIR}/docs/html/*
cd ${DIR}/build
cmake ..
make -j$THREADS
./tests_executable -s
