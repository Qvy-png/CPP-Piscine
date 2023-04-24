/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:44:44 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/04/24 15:07:20 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>


//create a function that will check if a string has only the necessary characters to be a valid RPN expression

bool argChecker(char *str) {
    int i = 0;
    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '+' && str[i] != '-' && str[i] != '*' && str[i] != '/' && (str[i] < '0' || str[i] > '9'))
        {
            std::cout << RED << "Error: " << CRESET << "Invalid character" << std::endl;
            return (false);
        }
        i++;
    }
    return (true);
}


//create me a simple main that will take as input a string on the 2nd argument and put it the stack of the RPN class
//keep in mind that the input that we are getting from the main is an inverted polish notation mathematical expression

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << RED << "Error: " << CRESET << "Wrong number of arguments" << std::endl;
        return (1);
    }
    if ( !argChecker(argv[1] ) )
        return (2);
    RPN rpn(argv[1]);
    rpn.parse();
    return (0);
}
