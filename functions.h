/*
 * This is a simple program that processses a positive integer input and dynamically makes two pseudo-random arrays and calculates the sum and average of each dynamic array in C++.
 * Note the header structure and files.
 * The only thing included in functions.cpp is this functions.h file
 * functions.h contains all directives for functions.cpp
 */
/* 
 * File:   functions.h
 * Author: Ahmed Eid
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

#define MIN 1
#define MAX 100


int sum_array(int*, const int);
float avg_array(int*, const int);
void add_arrays(int*, int*, int*, const int);
void display_array(int*, const int);
void fill_random(int*, const int);
bool is_positive_integer(char*);

#endif /* FUNCTIONS_H */
