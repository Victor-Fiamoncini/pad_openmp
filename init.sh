#/bin/bash

read -p "Enter a script path to execute: " FOLDER_NAME

g++ -fopenmp -o ./src/$FOLDER_NAME/main.o ./src/$FOLDER_NAME/main.cpp && ./src/$FOLDER_NAME/main.o
