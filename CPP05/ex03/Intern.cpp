/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:32:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/29 15:05:32 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#define NBR_FORMS 3

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
    
    if ( this == &ref )
        return ( *this );
    return ( *this );
}

Form*   Intern::makeForm( const std::string formName, const std::string formTarget ) {

    std::string	formNames[NBR_FORMS] = { "presidential pardon", "robotomy request", "shrubbery creation" };
    Form*		formList[NBR_FORMS] = { new PresidentialPardonForm( formTarget ), new RobotomyRequestForm( formTarget ), new ShrubberyCreationForm( formTarget ) };
	int			i = 0;
    int         j = -1;

	while (i < NBR_FORMS ){
	
		if ( formNames[i] == formName )
			j = i;
		i++;
	}
    if ( j != -1 ) {
        
        i = 0;
        while ( i < NBR_FORMS ) {
        
            if ( i != j )
                delete ( formList[i] );
            i++;
        }
        std::cout << GRN << "Intern creates " << formNames[j] << CRESET << std::endl;
        return ( formList[j] );
    }
    else {
    
        i = 0;
        while (i < NBR_FORMS )
            delete ( formList[i++] );
        std::cout << REDHB "Intern can't find the requested form!" CRESET << std::endl;
        return ( NULL );
    }
	
}