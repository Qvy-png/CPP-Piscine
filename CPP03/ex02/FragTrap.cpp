/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:57:18 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 13:43:03 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/////////////////////////////////////////////////////////
//													   //
//				  Constructor-Destructor			   //
//													   //
/////////////////////////////////////////////////////////

FragTrap::FragTrap( void ) {

	_name = "Default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << YEL << "FragTrap's default constructor called" << CRESET << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name, 100, 100, 30 ) {

	std::cout << YEL << "FragTrap's name assignment constructor called" << CRESET << std::endl;
}

FragTrap::FragTrap( const FragTrap &ref ) : ClapTrap( ref ){

	std::cout << YEL << "FragTrap's copy constructor called" << CRESET << std::endl;
	*this = ref;
}

FragTrap::~FragTrap( void ) {

	std::cout << MAG << "FragTrap's default destructor called" << CRESET << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap &ref ) {
	
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


void	FragTrap::highFivesGuys( void ) {

	std::cout << GRNHB << "HighFive Guys!" << CRESET << std::endl;
}

