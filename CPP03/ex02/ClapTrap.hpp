/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:47:13 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 13:44:04 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "color.hpp"

class ClapTrap {

protected:

    std::string _name;
    long int	_hitPoints;
    long int	_energyPoints;
    long int	_attackDamage;

public:

	ClapTrap( void );
    ClapTrap( std::string );
    ClapTrap( const ClapTrap &ref );
	ClapTrap( const std::string&, const int, const int, const int);
    ~ClapTrap( void );

	ClapTrap&	operator=( const ClapTrap& );

	std::string 	getName( void );
	long int	getHitPoints( void );
	long int	getEnergyPoints( void );
	long int	getAttackDamage( void );

	void			setName( std::string );
	void			setHitPoints( long int );
	void			setEnergyPoints( long int );
	void			setAttackDamage( long int );

	void			attack( const std::string& target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );
};

#endif