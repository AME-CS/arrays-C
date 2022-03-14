/*
 * This is a simple program that processses a positive integer input and dynamically makes two pseudo-random arrays and calculates the sum and average of each dynamic array in C++.
 * Note the header structure and files.
 * The only thing included here is functions.h
 * functions.h contains all other directives 
 */
/* 
 * File:   functions.cpp
 * Author: Ahmed Eid
 */

#include "functions.h"

int sum_array(int*arr, const int length){
    int sum = 0;
    for (int i=0; i<length; i++){
        sum += arr[i];
    }
    return sum;
}

float avg_array(int*arr, const int length){
    float avg = (float)sum_array(arr, length)/ (float)length;
    return avg;
}

void add_arrays(int*answers, int*numbers1, int*numbers2, const int length){
    for (int i=0; i<length; i++){
        answers[i] = numbers1[i] + numbers2[i];
    }
}

void display_array(int*arr, const int length){
    std::cout <<"[";
    for (int i=0; i<length; i++){
        std::cout << arr[i]<< " ";
    }
    std::cout<< "]"<<std::endl;
}

void fill_random(int*arr, const int length){
    for (int i=0; i<length; i++){
        arr[i]= (rand() % MAX) + MIN;
    }
}

bool is_positive_integer(char *str){
    bool non_negative_integer = true;
    bool all_zeros = true;
    char at_char[2];
    at_char[1] = '\0';
    int i = 0;
    while (str[i] != '\0') {
        at_char[0] = str[i];
        if (str[i] == '-') {
            non_negative_integer = false;
        } else if (atoi(at_char) == 0 && str[i] != '0') {
            non_negative_integer = false;
        }

        if (atoi(at_char) > 0) {
            all_zeros = false;
        }
        /*
        this was used to validate a positive integer by checking if the str input is non negative and doesnt contain any non numerical characters.
        std::cout<< "  " << str[i] << " " << atoi(at_char) << " " << non_negative_integer << " " << all_zeros << std::endl;
        */
        i++;
    }

    return non_negative_integer && !all_zeros;
}


