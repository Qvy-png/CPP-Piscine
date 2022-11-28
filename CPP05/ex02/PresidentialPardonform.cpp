/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonform.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:32:34 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/28 17:51:35 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "Default", 25, 5 ) {

    std::cout << YEL "PresidentialPardonForm's default constructor called" CRESET << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string name ) : Form( name, 25, 5 ) {

    std::cout << YEL "PresidentialPardonForm's name constructor called" CRESET << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& ref ) {

    std::cout << YEL "PresidentialPardonForm's copy constructor called" CRESET << std::endl;
    *this = ref;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

    std::cout << MAG "PresidentialPardonForm's destructor called" CRESET << std::endl;
    return ;
}

void    PresidentialPardonForm::execute( const Bureaucrat& exec) const {

    if ( exec.getGrade() > getSignGrade() )
        throw Form::GradeTooLowException();
    else
        std::cout << GRNHB << exec.getName() << " has been forgiven by President Zaphod Beeblebrox" CRESET << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& ref ) {

    if ( this == &ref )
        return ( *this );
    Form::operator=( ref );
    return ( *this );
}