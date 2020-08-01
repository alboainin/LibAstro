#!/bin/sh

mkdir buildRelease
cd buildRelease
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j9
cd ..
