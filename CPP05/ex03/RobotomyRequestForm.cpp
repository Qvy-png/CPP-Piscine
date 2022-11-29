/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:01:20 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/28 19:51:59 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "Default", 72, 45 ) {

    std::cout << YEL "RobotomyRequestForm's default constructor called" CRESET << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string name ) : Form( name, 72, 45 ) {

    std::cout << YEL "RobotomyRequestForm's name constructor called" CRESET << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& ref ) {

    std::cout << YEL "RobotomyRequestForm's copy constructor called" CRESET << std::endl;
    *this = ref;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

    std::cout << MAG "RobotomyRequestForm's destructor called" CRESET << std::endl;
    return ;
}

void RobotomyRequestForm::execute( const Bureaucrat& exec ) const {

    if ( exec.getGrade() > getExecGrade() )
        throw Form::GradeTooLowException();
    else {
    
        std::cout << BLU "BRRRRRRRRRRRRR" CRESET << std::endl;
        srand( time( NULL ) );
        if (std::rand() % 2 == 0)
            std::cout << BLU << exec.getName() << " had been robotomized with 50\% of success!" CRESET << std::endl;
        else
            std::cout << REDHB "The robotization of " << exec.getName() << " had failed!" CRESET << std::endl;
    }
}

RobotomyRequestForm&    RobotomyRequestForm::operator=( const RobotomyRequestForm& ref ) {

    if ( this == &ref )
        return ( *this );
    Form::operator=( ref );
    return ( *this );
}