/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:10:45 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/28 13:22:44 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "Default" ), _grade( 1 ) {

	std::cout << YEL << "Bureaucrat's default constructor called" << CRESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( grade ) {

	std::cout << YEL << "Bureaucrat's complete constructor called" << CRESET << std::endl;
	if ( grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& ref ) {

	*this = ref;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {

	std::cout << MAG << "Bureaucrat's destructor called" << CRESET << std::endl;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& ref ) {

	if ( this == &ref )
		return ( *this );

	std::string* strPtr = (std::string*)&this->_name;

	_grade = ref._grade;
	*strPtr = ref._name;
	return ( *this );
	
}

std::ostream& operator<<( std::ostream& stream, const Bureaucrat& source ) {

	stream << source.getName() << ", bureaucrat grade " << source.getGrade() << ".";
	return ( stream );
}

const std::string	Bureaucrat::getName( void ) const {

	return ( _name );
}

int					Bureaucrat::getGrade( void ) const {

	return ( _grade );
}

const char* 		Bureaucrat::GradeTooHighException::what( void ) const throw() {

	return ( REDHB "Grade too high!" CRESET );
}

const char* 		Bureaucrat::GradeTooLowException::what( void ) const throw() {

	return ( REDHB "Grade too low!" CRESET );
}

void				Bureaucrat::incrementGrade( int increment ) {

	if ( _grade - increment < 1 )
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= increment;
	
}

void				Bureaucrat::decrementGrade( int decrement ) {

	if ( _grade + decrement > 150 )
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += decrement;
}