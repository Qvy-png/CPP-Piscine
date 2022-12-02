/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:35:06 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/01 13:35:08 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( void ) : _c( 0 ), _cOver( 0 ), _i( 0 ), _iOver( 0 ),
                            _f( 0 ), _fOver( 0 ), _d( 0 ), _dOver( 0 ),
                            _infPos( 0 ), _infNeg( 0 ), _err( 0 ) {

    return ;
}

Convert::~Convert( void ) {

    return ;
}

Convert::Convert( const Convert& ref ) {

	*this = ref;
}

Convert&    Convert::operator=( const Convert& ref ) {

    _c = ref._c;
    _cOver = ref._cOver;
    _i = ref._i;
    _iOver = ref._iOver;
    _f = ref._f;
    _fOver = ref._fOver;
    _d = ref._d;
    _dOver = ref._dOver;
    _infPos = ref._infPos;
    _infNeg = ref._infNeg;
    _nan = ref._nan;
    _err = ref._err;
	return ( *this );
}

bool	isChar( std::string& arg ) {

	if ( arg.length() == 1 && std::isprint(arg[0]) )
		return ( 1 );
	return ( 0 );
}

void	Convert::convertChar( std::string& arg ) {

	_c = arg[0];
	_i = static_cast<int>( _c );
	_f = static_cast<float>( _c );
	_d = static_cast<double>( _c );
}

void	Convert::putChar( void ) const {

	if ( std::isprint( _c ) != 0 )
		std::cout << REDHB "Non displayable" CRESET << std::endl;
	else if ( _infNeg == 1 || _infPos == 1 || _nan == 1 || _cOver == 1 )
		std::cout << REDHB "Impossible" CRESET << std::endl;
	else
		std::cout << GRN << _c << CRESET << std::endl;
}

bool    isInt( std::string& arg ) {

    size_t	i;

	i = 0;
	while ( i < arg.length() ) {
	
		if ( i == 0 && ( arg[i] < '0' || arg[i] > '9' ) && arg[i] != '-' )
			return ( 0 );
		if ( i > 0 && ( arg[i] < '0' || arg[i] > '9' ) )
			return ( 0 );
	}
	return ( 1 );
}

void	Convert::convertInt( std::string& arg ) {

	
}

Convert::Convert( std::string& arg ) : _cOver( 0 ), _iOver( 0 ), _fOver( 0 ),
										_dOver( 0 ), _infPos( 0 ), _infNeg( 0 ),
										_err( 0 ) {

	if ( isChar( arg ) == 0 )
		convertChar( arg );
	// else if ( isInt( arg ) == 0 )
	// 	convertInt( arg );
	else if ( arg.compare( "+inf" ) == 0 || arg.compare( "+inff" ) == 0 )
		_infPos = 1;
	else if ( arg.compare( "-inf" ) == 0 || arg.compare( "-inff" ) == 0 )
		_infNeg = 1;
	else if ( arg.compare( "nan" ) == 0 || arg.compare( "nanf" ) == 0 )
		_nan = 1;
	
}

void	Convert::infoPrinter( void ) const {

	std::cout << YEL << "char: ";
	this->putChar();
	std::cout << GRN << "int: ";
	// Convert::putInt();
	
}