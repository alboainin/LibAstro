#!/bin/sh

mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j9
cd ..
