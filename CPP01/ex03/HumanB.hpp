/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:47:03 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/30 17:17:13 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {

private:

	Weapon		*_weapon;
	std::string _name;

public:

	HumanB( void );
	HumanB( std::string name );
	~HumanB( void );

	void	attack( void );
	void	setName( std::string name );
	void	setWeapon( Weapon &weapon );
};