/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:00:39 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/04/25 16:21:47 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//create a function that will get a string, and figure out if it is a positive integer or not

bool isPositiveInteger(std::string str) {
    
    for (unsigned long i = 0; i < str.length(); i++) {
        
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

//create a main that should get the sequence of integers and put it in a std::string array and use the isPositiveInteger function to check if the string is a positive integer or not, in c++98 without using stoi

int main ( int argc, char **argv) {
    
    if (argc < 2) {
        
        std::cout << "Error: No arguments" << std::endl;
        return 0;
    }
    
    std::string *str = new std::string[argc - 1];
    
    for (int i = 1; i < argc; i++) {
        
        str[i - 1] = argv[i];
        
        if (!isPositiveInteger(str[i - 1])) {
            std::cout << "Error: Invalid argument" << std::endl;
            return 0;
        }
    }
    
    int *array = new int[argc - 1];
    
    for (int i = 0; i < argc - 1; i++) {

        array[i] = std::atoi(str[i].c_str());
    }
    
    PmergeMe p;
    
    p.mergeSort(array, argc - 1);
    
    p.printArray(array, argc - 1);
    
    return 0;
}