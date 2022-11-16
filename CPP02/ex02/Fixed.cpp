/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:45:15 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/13 11:18:30 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

///////////////////////////////////////////////
//			Constructor Destructor			 //
///////////////////////////////////////////////

Fixed::Fixed( void ) : _entier( 0 ) {
	
	return ;
}

Fixed::Fixed( int const constInt) : _entier( constInt * ( 1 << Fixed::_constant ) ) {

	return ;
}

Fixed::Fixed( float const constFloat ) : _entier( roundf( constFloat * ( 1 << Fixed::_constant ) ) ){

	return ;
}

Fixed::Fixed( const Fixed& ref ) {

	*this = ref;
	return ;
}

Fixed::~Fixed ( void ) {

	return ;
}

///////////////////////////////////////////////
//				Operator Overload			 //
///////////////////////////////////////////////

int		Fixed::operator>( const Fixed& ref ) {

	return ( getRawBits() > ref.getRawBits() );
}

int		Fixed::operator<( const Fixed& ref ) {

	return ( getRawBits() < ref.getRawBits() );
}

int		Fixed::operator>=( const Fixed& ref ) {

	return ( getRawBits() >= ref.getRawBits() );
}

int		Fixed::operator<=( const Fixed& ref ) {

	return ( getRawBits() <= ref.getRawBits() );
}

int		Fixed::operator==( const Fixed& ref ) {

	return ( getRawBits() == ref.getRawBits() );
}

int		Fixed::operator!=( const Fixed& ref ) {

	return ( getRawBits() != ref.getRawBits() );
}

Fixed	Fixed::operator+( const Fixed& ref ) {

	return ( Fixed( toFloat() + ref.toFloat() ) );
}

Fixed	Fixed::operator-( const Fixed& ref ) {

	return ( Fixed( toFloat() - ref.toFloat() ) );
}

Fixed	Fixed::operator*( const Fixed& ref ) {

	return ( Fixed( toFloat() * ref.toFloat() ) );
}

Fixed	Fixed::operator/( const Fixed& ref ) {

	return ( Fixed( toFloat() / ref.toFloat() ) );
}

Fixed	Fixed::operator++( void ) {

	setRawBits( getRawBits() + 1 );
	return ( *this );
}

Fixed	Fixed::operator--( void ) {

	setRawBits( getRawBits() - 1 );
	return ( *this );
}

Fixed	Fixed::operator++( int u ) { // __attribute__((unused)) 

	Fixed fix( *this );

	( void )u;
	setRawBits( getRawBits() + 1 );
	return ( fix );
}

Fixed	Fixed::operator--( int u ) {

	Fixed fix( *this );

	( void )u;
	setRawBits( getRawBits() - 1 );
	return	( fix );
}

Fixed&	Fixed::operator=( const Fixed& ref ) {

	_entier = ref.getRawBits();
	return ( *this );
}

std::ostream&	operator<<( std::ostream& stream, const Fixed& source ) {

	stream << source.toFloat();
	return ( stream );
}

///////////////////////////////////////////////
//				Member Functions			 //
///////////////////////////////////////////////

//A REMPLACER

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

Fixed&	Fixed::min( Fixed& i, Fixed& j ) {

	return ( ( i < j ) ? i : j );
}

Fixed&	Fixed::max( Fixed& i, Fixed& j ) { 

	return ( ( i > j ) ? i : j );
}

const Fixed&	Fixed::min( const Fixed& i, const Fixed& j ) {

	return ( ( i.getRawBits() < j.getRawBits() ) ? i : j );
}

const Fixed&	Fixed::max(const Fixed& i, const Fixed& j) {

	return ( ( i.getRawBits() > j.getRawBits() ) ? i : j );
}