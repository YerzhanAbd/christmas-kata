#!/bin/bash

mkdir -p build
g++ ./src/*.cpp -Wall -std=c++11 -I ./include/ -o build/test.o 
./build/test.o