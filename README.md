# Sim-Mod-Analysis Assignment 2

This repository has solutions for the Assignment 2 of the course Simulation, Modelling and Analysis.

## A Quick Note

All the programs here are written in compliance with `C++ 14 version`. A standard `gcc compiler` will do great. These programs will **NOT** run in MS Turbo C++ Compiler. Else please use [this online compiler](https://www.programiz.com/cpp-programming/online-compiler/) to verify the code.

# Logs

## Question Number 2
The triangular PDF's X value is randomly generated and it's mean is computed assuming -infinity to +infifnity as -10 to +10. Changing this range can affect the resulting mean of the given PDF. But increasing the range will help converge the mean value more closer to theoretical value. The program can be found in `questionNo02.cpp`.

## Question Number 11
The table is generated using spreadsheet `question11.xlsx` and the data is fed as a separate function in C++ [`questionNo11.cpp`] to simulate the process and genrate the random values.

## Question Number 13
The random number generation program is written in `questionNo13.cpp` and the resulting output simulation is recorded for reference in `question13.xlsx`. The random seed values are taken from table A.1 in textbook.

## Question Number 18
A sample of 2000 numbers has been generated [`questionNo18.cpp`] and stored as a csv file [`q18 random_notmal.csv`] to check the effectiveness of the random number generated in accordance with specifications given.