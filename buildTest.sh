#!/usr/bin/env bash
cd tests;
mkdir -p build;
cd build;
cmake ..;
make;
cd ../..;