#!/bin/bash

mkdir -p build && cd build
cmake .. 
make
make test
cp ./src/exe/main ../main