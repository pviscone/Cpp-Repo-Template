#! /bin/bash
mkdir -p ./build
cd ./build
cmake ..
make -j4
./tests_executable -s