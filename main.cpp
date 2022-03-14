/*
 * This is a simple program that processses a positive integer input and dynamically makes two pseudo-random arrays and calculates the sum and average of each dynamic array in C++.
 * Note the header structure and files.
 * The only thing included here is main.h
 * main.h contains all other directives 
 */
/* 
 * File:   main.cpp
 * Author: Ahmed Eid
 */
#include "main.h"

int main(int argc, char** argv) {
    srand(time(NULL));
    if (argc == 2){
        /*
        seeing if my is_positive_integer works as expected
        std::cout<< argv[0]<<" "<<argv[1]<<"\n"<<std::endl;
        std::cout<<is_positive_integer("1a3")<<std::endl;
        std::cout<<is_positive_integer("a")<<std::endl;
        std::cout<<is_positive_integer("-001")<<std::endl;
        std::cout<<is_positive_integer("-000")<<std::endl;
        std::cout<<is_positive_integer("000")<<std::endl;
        std::cout<<is_positive_integer("001")<<std::endl;
        check if each char in str is + integer
        */
        if ( is_positive_integer(argv[1]) ) {
            int length = atoi(argv[1]);
            // std::cout<<length<<std::endl;
            int *numbers1;
            numbers1= new int [length];
            int *numbers2;
            numbers2= new int [length];
            int *answers;
            answers= new int [length];
            fill_random(numbers1, length);
            fill_random(numbers2, length);
            std::cout << "the two created arrays are:" << std::endl;
            display_array(numbers1,length);
            display_array(numbers2,length);
            add_arrays(answers,numbers1,numbers2,length);
            std::cout << "\nadding the arrays together:" << std::endl;
            display_array(answers,length);
            std::cout << "\nThe sum and average of the arrays:"<<std::endl;
            std::cout << "array 1 sum: "<< sum_array(numbers1,length)<<std::endl;
            std::cout << "array 1 average: "<< avg_array(numbers1,length)<<std::endl;
            std::cout << "\narray 2 sum: "<< sum_array(numbers2,length)<<std::endl;
            std::cout << "array 2 average: "<< avg_array(numbers2,length)<<std::endl;
            delete numbers1,numbers2,answers;
        } else {
            std::cout<< "usage: a.out n (where n is a number above 0)" << std::endl;
        } 
    } else {
        std::cout<< "usage: a.out n (where n is a number above 0)" << std::endl;
    }
    

    return 0;
}

