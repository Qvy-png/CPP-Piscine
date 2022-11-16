/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:06:28 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 13:47:09 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/////////////////////////////////////////////////////////
//													   //
//				  Constructor-Destructor			   //
//													   //
/////////////////////////////////////////////////////////

ScavTrap::ScavTrap( void ) {
	
	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << YEL << "ScavTrap's default constructor called" << CRESET << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

	std::cout << YEL << "ScavTrap's name assignment constructor called" << CRESET << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &ref ) : ClapTrap( ref ) {

	std::cout << YEL << "ScavTrap's copy constructor called" << CRESET << std::endl;
	*this = ref;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << MAG << "ScavTrap's default destructor called" << CRESET << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap &ref ) {
	
	_name = ref._name;
	_hitPoints = ref._hitPoints;
	_energyPoints = ref._energyPoints;
	_attackDamage = ref._attackDamage;
	return ( *this );
}

/////////////////////////////////////////////////////////
//													   //
//					Member functions 				   //
//													   //
/////////////////////////////////////////////////////////

void	ScavTrap::attack( const std::string& target ) {

	if ( this->getHitPoints() < 1 )
		std::cout << REDHB << "ScavTrap " << this->getName() << " is dead and thus cannot attack!" << CRESET << std::endl;
	else if ( this->getEnergyPoints() < 1)
		std::cout << REDHB << "ScavTrap " << this->getName() << " is out of energy!" << CRESET << std::endl;
	else {
	
		std::cout << BLU << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! Such effectiveness !" << CRESET << std::endl;
		_energyPoints--;
	}
}

void	ScavTrap::guardGate( void ) {

	std::cout << GRNHB << this->getName() << " is guarding the gate.. Unless he's dead ?" << CRESET << std::endl;
}