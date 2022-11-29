/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:34:25 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/29 15:02:19 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void ) {

	Form* A1;
	Form* A2;
	Form* A3;
	Form* A4;
	Intern someRandomIntern;

	std::cout << std::endl << std::endl;
	
	A1 = someRandomIntern.makeForm("presidential pardon", "Obama Prism");
	std::cout << GRN << A1->getName() << CRESET << std::endl;

	std::cout << std::endl << std::endl;
	
	A2 = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << GRN << A2->getName() << CRESET << std::endl;
	
	std::cout << std::endl << std::endl;
	
	A3 = someRandomIntern.makeForm("shrubbery creation", "Tree");
	std::cout << GRN << A3->getName() << CRESET << std::endl;
	
	std::cout << std::endl << std::endl;
	
	A4 = someRandomIntern.makeForm("Jacques", "Jacques");
	// std::cout << A4->getName() << std::endl; // ne peut pas afficher car n'existe pas 

	std::cout << std::endl << std::endl;

	delete ( A1 );
	delete ( A2 );
	delete ( A3 );
	return ( 0 );
}