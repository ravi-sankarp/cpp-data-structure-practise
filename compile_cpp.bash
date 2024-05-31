#!/bin/bash
echo -e "\033[32m Compiling... \033[0m"
g++ "$1.cpp" -o "$1" 
echo -e "\033[32m Executing program... \033[0m"
 "./$1"