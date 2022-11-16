/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:09:04 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/30 17:41:58 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon(weapon), _name(name) {

	std::cout << YEL << "HumanA's constructor called with the parameters " << name << "and " << weapon.getType() << "." << CRESET << std::endl;
	HumanA::_weapon.setType( weapon.getType() );
	HumanA::setName( name );
}

HumanA::~HumanA( void ) {

	std::cout << MAG << "HumanA's destructor called." << CRESET << std::endl;	
}

void    HumanA::attack( void ) const {

	std::cout << HumanA::_name << " attacks with their " << this->_weapon.getType() << "." << std::endl;
}

void	HumanA::setName( std::string name ) {

	_name = name;
}

void	HumanA::setWeapon( Weapon &weapon ) {

	_weapon = weapon;
}