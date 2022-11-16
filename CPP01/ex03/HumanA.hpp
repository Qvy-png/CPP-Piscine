/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:17:15 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/08 15:34:36 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {

private:

	Weapon&		_weapon;
	std::string	_name;

public:

	// HumanA( void ); -> can't have an empty weapon
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );
	
	void	attack( void ) const ;
	void	setName( std::string name );
	void	setWeapon( Weapon &weapon );
};

#endif