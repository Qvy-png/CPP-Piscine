/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:38:36 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/24 17:10:35 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "treat.hpp"

///-----------------------------------------///
///			Constructor-Destructor			///
///-----------------------------------------///

treat::treat( void ) {

	std::cout << YEL << "Treat's constructor called." << CRESET << std::endl;
}

treat::treat( const treat &ref ) {

	std::cout << YEL << "Treat's constructor by copy called." << CRESET << std::endl;
	_fileName = ref._fileName;
	_s1 = ref._s1;
	_s2 = ref._s2;
}

treat::~treat( void ) {

	std::cout << MAG << "Treat's destructor called." << CRESET << std::endl;
}

///-----------------------------------------///
///				Member functions			///
///-----------------------------------------///

std::string		treat::filenameGetter( void ) {

	return ( _fileName );
}

std::string		treat::s1Getter( void ) {

	return ( _s1 );
}

std::string		treat::s2Getter( void ) {

	return ( _s2 );
}

void			treat::filenameSetter( std::string fileName) {

	_fileName = fileName;
}

void			treat::s1Setter( std::string s1 ) {

	_s1 = s1;
}

void			treat::s2Setter( std::string s2 ) {

	_s2 = s2;
}