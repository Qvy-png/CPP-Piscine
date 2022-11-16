/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:03:25 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 12:26:20 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

	std::cout << YEL << "Zombie's constructor called." << CRESET << std::endl;
}

Zombie::Zombie( std::string name ) {

	std::cout << YEL << "Zombie's name constructor called." << CRESET << std::endl;	
	_name = name;
}

Zombie::~Zombie( void ) {

	std::cout << MAG << "Zombie " << _name << " eliminated." << CRESET << std::endl;
}

void	Zombie::announce( void ) {

	std::cout <<  BHGRN << _name << ": BraiiiiiiinnnzzzZ..." << CRESET << std::endl;
}

void	Zombie::setName( std::string name ) {
	
	_name = name;
}
