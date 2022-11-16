/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:47:11 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 13:39:51 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/////////////////////////////////////////////////////////
//													   //
//				  Constructor-Destructor			   //
//													   //
/////////////////////////////////////////////////////////

ClapTrap::ClapTrap( void ) : _name( "Default" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )  {
	
	std::cout << YEL << "ClapTrap's default constructor called" << CRESET << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {

	std::cout << YEL << "ClapTrap's name assignment constructor called" << CRESET << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &ref ) {

	std::cout << YEL << "ClapTrap's copy constructor called" << CRESET << std::endl;
	*this = ref;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << MAG << "ClapTrap's default destructor called" << CRESET << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &ref ) {
	
	_name = ref._name;
	_hitPoints = ref._hitPoints;
	_energyPoints = ref._energyPoints;
	_attackDamage = ref._attackDamage;
	return ( *this );
}

/////////////////////////////////////////////////////////
//													   //
//					  Setter-Getter 				   //
//													   //
/////////////////////////////////////////////////////////

std::string ClapTrap::getName( void ) {

	return ( _name );
}

long int			ClapTrap::getHitPoints( void ) {

	return ( _hitPoints );
}

long int			ClapTrap::getEnergyPoints( void ) {

	return ( _energyPoints );
}

long int			ClapTrap::getAttackDamage( void ) {

	return ( _attackDamage );
}


void		ClapTrap::setName( std::string name ) {

	_name = name;
}

void		ClapTrap::setHitPoints( long int hp ) {

	_hitPoints = hp;
}

void		ClapTrap::setEnergyPoints( long int ep ) {

	_energyPoints = ep;
}

void		ClapTrap::setAttackDamage( long int ad ) {

	_attackDamage = ad;
}

/////////////////////////////////////////////////////////
//													   //
//					Member functions 				   //
//													   //
/////////////////////////////////////////////////////////

void	ClapTrap::attack( const std::string& target ) {

	if ( this->getHitPoints() < 1 )
		std::cout << REDHB << "ClapTrap " << this->getName() << " is dead!" << CRESET << std::endl;
	else if ( this->getEnergyPoints() < 1 )
		std::cout << REDHB << "ClapTrap " << this->getName() << " is out of energy!" << CRESET << std::endl;
	else {
	
		std::cout << BLU << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << CRESET << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if ( this->getHitPoints() <= 0 )
		std::cout << REDHB << "You're trying to kill a dead person ..." << CRESET << std::endl;
	else if ( amount == 0 )
		std::cout << REDHB << "Wow, it's not very effective ..." << CRESET << std::endl;
	else {
	
		this->_hitPoints -= amount;
		if ( this->getHitPoints() <= 0 )
			std::cout << RED << "ClapTrap " << this->getName() << " has died!" << CRESET << std::endl;
		else
			std::cout << RED << "ClapTrap has lost " << amount << " hit point(s)!" << CRESET <<  std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if ( this->_hitPoints <= 0 )
		std::cout << REDHB << "ClapTrap " << this->getName() << " is dead and thus can't be repaired!" << CRESET << std::endl;
	else if ( this->_energyPoints <= 0 )
		std::cout << REDHB << "ClapTrap " << this->getName() << " is out of energy!" << CRESET << std::endl;
	else if ( amount == 0 ) {

		std::cout << REDHB << "Wow, it's not very effective ..." << CRESET << std::endl;
		_energyPoints--;		
	}
	else {
	
		this->_hitPoints += amount;
		_energyPoints--;
		std::cout << BLU << "ClapTrap " << this->getName() << " has been repaired of " << amount << " hit point(s) and is now at " << this->getHitPoints() << " hit point(s)." << CRESET << std::endl;
	}
}