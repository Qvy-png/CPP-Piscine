/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:32:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/29 14:14:22 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#define NBR_FORMS = 3

Intern::Intern( void ) {

    std::cout << YEL "Intern's default constructor called" CRESET << std::endl;
    return ;
}

Intern::Intern( const Intern& ref ) {

    std::cout << YEL "Intern's copy constructor called" CRESET << std::endl;
    *this = ref;
    return ;
}

Intern::~Intern( void ) {

    std::cout << MAG "Intern's destructor called" CRESET << std::endl;
    return ;
}

Intern& Intern::operator=( const Intern& ref ) {
    
    return ( *this );
}

Form*   Intern::makeForm( const std::string formName, const std::string formTarget ) {

    std::string	formNames[NBR_FORMS] = { "president pardon", "robotomy request", "shubbery creation" };
    Form*		formList[NBR_FORMS] = { new PresidentialPardonForm( formName ), new RobotomyRequestForm( formName ), new ShrubberyCreationForm( formName ) };
	int			i = 0;

	while (i < NBR_FORMS ){
	
		if ( formNames[i] == formName )
			return ( formList[i] );
		i++;
	}
	std::cout << REDHB "The intern can't find the requested form!" CRESET << std::endl;
}