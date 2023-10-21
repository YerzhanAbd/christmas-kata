#!/bin/bash

mkdir -p build
g++ ./src/*.cpp -I ./include/ -o build/test.o
./build/test.o