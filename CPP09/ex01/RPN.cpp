/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:00:39 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/04/24 15:20:09 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) : _str(""), _stack() {

    return ;
}

RPN::RPN(std::string str) : _str(str), _stack() {

    return ;
}

RPN::RPN(RPN const &src) {

    *this = src;
    return ;
}

RPN::~RPN(void) {

    return ;
}

RPN &RPN::operator=(RPN const &src) {

    this->_str = src._str;
    this->_stack = src._stack;
    return (*this);
}

//RPN parse puts all the elements of the string in the stack, and calculates the result

void RPN::parse(void) {

    int i = 0;
    while (this->_str[i])
    {
        if (this->_str[i] >= '0' && this->_str[i] <= '9')
            this->_stack.push(this->_str[i] - '0');
        else if (this->_str[i] == '+')
        {
            if (this->_stack.size() < 2)
            {
                std::cout << RED << "Error: " << CRESET << "Not enough numbers in the stack" << std::endl;
                return ;
            }
            int a = this->_stack.top();
            this->_stack.pop();
            int b = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a + b);
        }
        else if (this->_str[i] == '-')
        {
            if (this->_stack.size() < 2)
            {
                std::cout << RED << "Error: " << CRESET << "Not enough numbers in the stack" << std::endl;
                return ;
            }
            int a = this->_stack.top();
            this->_stack.pop();
            int b = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a - b);
        }
        else if (this->_str[i] == '*')
        {
            if (this->_stack.size() < 2)
            {
                std::cout << RED << "Error: " << CRESET << "Not enough numbers in the stack" << std::endl;
                return ;
            }
            int a = this->_stack.top();
            this->_stack.pop();
            int b = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a * b);
        }
        else if (this->_str[i] == '/')
        {
            if (this->_stack.size() < 2)
            {
                std::cout << RED << "Error: " << CRESET << "Not enough numbers in the stack" << std::endl;
                return ;
            }
            int a = this->_stack.top();
            this->_stack.pop();
            int b = this->_stack.top();
            this->_stack.pop();
            this->_stack.push(a / b);
        }
        i++;
    }
    if (this->_stack.size() != 1)
    {
        std::cout << RED << "Error: " << CRESET << "Too many numbers in the stack" << std::endl;
        return ;
    }
    std::cout << this->_stack.top() << std::endl;
    return ;
}
