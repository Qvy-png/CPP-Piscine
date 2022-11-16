/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:23:12 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 15:08:41 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weap ) {

    _type = weap;
    std::cout << YEL << "Weapon's constructor called with parameter " << weap << "." << CRESET << std::endl;
}

Weapon::~Weapon( void ) {

    std::cout << MAG << "Weapon's destructor called." << CRESET << std::endl;
}

void    Weapon::setType( std::string type ) {

    _type = type;
}

std::string Weapon::getType( void ) const {

    return (_type);
}