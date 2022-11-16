/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:48:04 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 15:07:58 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define BLU "\e[0;34m"
#define CRESET "\e[0m"

#include <iostream>
#include <string>

int main( void ) {

	std::string string;
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	string = "HI THIS IS BRAIN";
	std::cout << RED << &string << CRESET<< std::endl;
	std::cout << GRN << stringPTR  << CRESET << std::endl;
	std::cout << BLU << &stringREF << CRESET << std::endl;
	std::cout << std::endl;
	std::cout << RED << string << CRESET << std::endl;
	std::cout << GRN << *stringPTR << CRESET << std::endl;
	std::cout << BLU << stringREF << CRESET << std::endl;
}