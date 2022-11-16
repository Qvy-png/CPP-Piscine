/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setterGetter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:16:27 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/06 13:17:29 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::getFirstName( void ) {
	
	return ( _firstName );
}

void	Contact::setFirstName( std::string setFirstName ) {
	
	_firstName = setFirstName; 
}

std::string Contact::getLastName( void ) {
	
	return ( _lastName );
}

void	Contact::setLastName( std::string setLastName ) {

	_lastName = setLastName;
}

std::string Contact::getNickName( void ) {

	return( _nickName );
}

void	Contact::setNickName( std::string setNickName ) {

	_nickName = setNickName;
}

std::string Contact::getPhoneNumber( void ) {

	return( _phoneNumber );
}

void	Contact::setPhoneNumber( std::string setPhoneNumber ) {

	_phoneNumber = setPhoneNumber;
}

std::string Contact::getDarkestSecret( void ) {

	return( _darkestSecret );
}

void	Contact::setDarkestSecret( std::string setDarkestSecret ) {

	_darkestSecret = setDarkestSecret;
}
