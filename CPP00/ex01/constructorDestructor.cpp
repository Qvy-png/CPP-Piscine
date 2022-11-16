/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructorDestructor.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:17:22 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/27 13:34:47 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook( void ) {
	
	std::cout << YEL << "PhoneBook's constructor called" << CRESET << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	
	std::cout << MAG << "PhoneBook's destructor called" << CRESET << std::endl;
	return ;
}

Contact::Contact( void ) {

	std::cout << YEL << "Contact's constructor called" << CRESET << std::endl;
	return ;
}

Contact::Contact( const Contact &ref ) {

	_firstName = ref._firstName;
	_lastName = ref._lastName;
	_nickName = ref._nickName;
	_phoneNumber = ref._phoneNumber;
	_darkestSecret = ref._darkestSecret;
	std::cout << "Contact's copy constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	std::cout << MAG << "Contact's destructor called" << CRESET << std::endl;
	return ;
}
