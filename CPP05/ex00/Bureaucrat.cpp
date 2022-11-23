/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:10:45 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/23 15:29:59 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Default" ), _grade( 0 ) {

	std::cout << YEL << "Bureaucrat's default constructor called" << CRESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( grade ) {

	std::cout << YEL << "Bureaucrat's complete constructor called" << CRESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& ref ) {

	*this = ref;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << MAG << "Bureaucrat's destructor called" << CRESET << std::endl;
}

const std::string	Bureaucrat::getName( void ) const {

	return ( _name );
}

int					Bureaucrat::getGrade( void ) const {

	return ( _grade );
}

std::exception		Bureaucrat::GradeTooHighException( void ) {

	return (std::exception());
}

std::exception		Bureaucrat::GradeTooLowException( void ) {

	return (std::exception());
}

void				Bureaucrat::incrementGrade( void ) {

	try {
		if ( _grade == 150 )
			throw Bureaucrat::GradeTooHighException(); //std::exception()
		else
			_grade++;
	}
}

void				Bureaucrat::decrementGrade( void ) {

	try {
		if ( _grade == 1 )
			throw Bureaucrat::GradeTooLowException(); //std::exception()
		else
			_grade--;
	}
}