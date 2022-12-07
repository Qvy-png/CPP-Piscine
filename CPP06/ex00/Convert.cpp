/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:35:06 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/07 10:36:07 by rdel-agu         ###   ########.fr       */
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

	//////////////////////////////////////
	//									//
	//				CHAR				//
	//									//
	//////////////////////////////////////


bool	isChar( std::string& arg ) {

	if ( arg.length() == 1 && arg[0] == 0 )
		return ( 0 ); 
	if ( arg.length() == 1 && std::isprint(arg[0]))
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

	
	if ( _infNeg == 1 || _infPos == 1 || _nan == 1 || _cOver == 1 || _err == 1 )
		std::cout << REDHB "Impossible" CRESET << std::endl;
	else if ( std::isprint( _c ) == 0 )
		std::cout << REDHB "Non displayable" CRESET << std::endl;
	else
		std::cout << YEL "\'" << _c << "\'" CRESET << std::endl;
}

	//////////////////////////////////////
	//									//
	//				INT					//
	//									//
	//////////////////////////////////////

bool    isInt( std::string& arg ) {

    size_t	i;

	i = 0;
	while ( i < arg.length() ) {
	
		if ( i == 0 && ( arg[i] < '0' || arg[i] > '9' ) && arg[i] != '-' )
			return ( 0 );
		if ( i > 0 && ( arg[i] < '0' || arg[i] > '9' ) )
			return ( 0 );
		i++;
	}
	return ( 1 );
}

void	Convert::convertInt( std::string& arg ) {

	_i = atoi( arg.c_str() );
	_c = static_cast<char>( _i );
	_f = static_cast<float>( _i );
	_d = static_cast<double>( _i );
}

void	Convert::putInt( void ) const {

	if ( _infNeg == 1 || _infPos == 1 || _nan == 1 || _cOver == 1 || _err == 1)
		std::cout << REDHB "Impossible" CRESET << std::endl;
	else
		std::cout << GRN << _i << CRESET << std::endl;
}

	//////////////////////////////////////
	//									//
	//				FLOAT				//
	//									//
	//////////////////////////////////////

bool	isFloat( std::string& arg ) {

	if ( arg[arg.length() - 1 ] == 'f')
		return ( 1 );
	return ( 0 );
}

void	Convert::convertFloat( std::string& arg ) {

	_f = atof( arg.c_str() );
	_i = static_cast<int>( _f );
	_c = static_cast<char>( _f );
	_d = static_cast<double>( _f );
}

void	Convert::putFloat( void ) const {

	if ( _infNeg == 1 )
		std::cout << "-inff" << std::endl;
	else if ( _infPos == 1 )
		std::cout << "+inff" << std::endl;
	else if ( _nan == 1 )
		std::cout << "nanf" << std::endl;
	else if ( _fOver == 1 || _err == 1 )
		std::cout << REDHB "Impossible" CRESET << std::endl;
	else {

		if ( _f != static_cast<int>( _f ) )
			std::cout << BLU << _f << "f" CRESET << std::endl;
		else
			std::cout << BLU << _f << ".0f" CRESET << std::endl;
	}
}

	//////////////////////////////////////
	//									//
	//			    DOUBLE				//
	//									//
	//////////////////////////////////////

bool	isDouble( std::string& arg ) {

	if ( arg.find('.') )
		return ( 1 );
	return ( 0 );
}

void	Convert::convertDouble( std::string& arg ) {

	_d = atof( arg.c_str() );
	_i = static_cast<int>( _d );
	_c = static_cast<char>( _d );
	_f = static_cast<float>( _d );
}

void	Convert::putDouble( void ) const {

	if ( _infNeg == 1 )
		std::cout << "-inf" << std::endl;
	else if ( _infPos == 1 )
		std::cout << "+inf" << std::endl;
	else if ( _nan == 1 )
		std::cout << "nan" << std::endl;
	else if ( _dOver == 1 || _err == 1 )
		std::cout << REDHB "Impossible" CRESET << std::endl;
	else {
	
		if ( _d != static_cast<int>( _d ) )
			std::cout << CYN << _d << CRESET << std::endl;
		else
			std::cout << CYN << _d << ".0" CRESET << std::endl;
	}
}

///////////////////////////////////////////////////////////////

int		rightChars( std::string& arg ) {

	int	i;

	i = 0;
	while ( arg.c_str()[i] ) {
	
		if ( ( arg.c_str()[i] != 'f' && arg.c_str()[i] != '-' && arg.c_str()[i] != '.' && ( arg.c_str()[i] > '9' || arg.c_str()[i] < '0' ) ) )
			return ( 0 );
		i++;
	}
	return ( 1 );
}

int		withinLim( std::string& arg ) {

	long	i;

	i = atol( arg.c_str() );
	std::cout << i << std::endl;
	if ( i > 2147483647 || i < -2147483648 )
		return ( 0 );
	return ( 1 );
}

Convert::Convert( std::string& arg ) : _cOver( 0 ), _iOver( 0 ), _fOver( 0 ),
										_dOver( 0 ), _infPos( 0 ), _infNeg( 0 ),
										_err( 0 ) {

	
	if ( arg.compare( "+inf" ) == 0 || arg.compare( "+inff" ) == 0 )
		_infPos = 1;
	else if ( arg.compare( "-inf" ) == 0 || arg.compare( "-inff" ) == 0 )
		_infNeg = 1;
	else if ( arg.compare( "nan" ) == 0 || arg.compare( "nanf" ) == 0 )
		_nan = 1;
	else if ( ( arg.length() > 1 && rightChars( arg ) == 0 ) || withinLim( arg ) == 0 )
		_err = 1;
	else if ( isInt( arg ) )
		convertInt( arg );
	else if ( isChar( arg ) )
		convertChar( arg );
	else if ( isFloat( arg ) )
		convertFloat( arg );
	else if ( isDouble( arg ) )
		convertDouble( arg );
	else
		_err = 1;
	
}

void	Convert::infoPrinter( void ) const {

	std::cout << YEL << "char: ";
	this->putChar();
	std::cout << GRN << "int: ";
	this->putInt();
	std::cout << BLU << "float: ";
	this->putFloat();
	std::cout << CYN << "double: ";
	this->putDouble();
	
}