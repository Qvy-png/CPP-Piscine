/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:45:21 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/08 14:39:11 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _entier( 0 ) {

    std::cout << YEL << "Default constructor called" << CRESET << std::endl;
}

Fixed::Fixed( const int entier ) : _entier( entier * (1 << Fixed::_constant) ) {

    std::cout << YEL << "Int constructor called" << CRESET << std::endl;
}

Fixed::Fixed( const float flottant ) : _entier( roundf( flottant * ( 1 << Fixed::_constant ) )) {

    std::cout << YEL << "Float constructor called" << CRESET << std::endl;
}

Fixed::Fixed( const Fixed& ref ) {

    std::cout << BLU << "Copy constructor called" << CRESET << std::endl;
	*this = ref;
}

Fixed::~Fixed( void ) {

	std::cout << MAG << "Destructor called" << CRESET << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &ref) {

	std::cout << GRN <<  "Copy assignement operator called" << CRESET << std::endl;
	_entier = ref.getRawBits();
	return (*this);
}

std::ostream& operator<<( std::ostream& out, const Fixed &ref ) {

	out << ref.toFloat();
	return ( out );
}

int		Fixed::getRawBits( void ) const {

	return ( _entier );
}

void	Fixed::setRawBits( const int raw ) {

	_entier = raw;
}

int Fixed::toInt( void ) const {

    return ( _entier / ( 1 << Fixed::_constant ) );
}

float Fixed::toFloat( void ) const {

    return ( _entier / ( float )( 1 << Fixed::_constant ) );
}