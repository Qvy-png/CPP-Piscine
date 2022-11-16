/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:52:23 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/30 17:17:03 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ) {
    
    std::cout << YEL << "HumanB's constructor called." << CRESET << std::endl;
}

HumanB::HumanB( std::string name ) {

	std::cout << YEL << "HumanB's constructor called with parameter " << name << "." << CRESET << std::endl;
	HumanB::setName( name );
}


HumanB::~HumanB( void ) {
    
    std::cout << MAG << "HumanB's destructor called." << CRESET << std::endl;
}

void    HumanB::attack( void ) {

    if ( HumanB::_weapon->getType().empty() )
        std::cout << HumanB::_name << "attacks with their bare hands." << std::endl;
    else
        std::cout << HumanB::_name << " attacks with their " << HumanB::_weapon->getType() << "." << std::endl;
}

void	HumanB::setName( std::string name ) {

	_name = name;
}

void	HumanB::setWeapon( Weapon &weapon ) {

	_weapon = &weapon;
}