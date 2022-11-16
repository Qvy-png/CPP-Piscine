/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:15:11 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/19 10:10:23 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// int main( void ) {

// 	Weapon pistolet;
// 	std::string Henri;
// 	std::string Garcia;
// 	pistolet.setType("Trebuchet");
	
// 	HumanA aHuman(pistolet);
// 	HumanB bHuman;
	
// 	Henri = "Henri";
// 	Garcia = "Garcia";
	
// 	aHuman.setName(Henri);
// 	bHuman.setName(Garcia);
// 	std::cout << std::endl;
// 	aHuman.attack();
// 	bHuman.attack();
// 	bHuman.setWeapon(Henri);
// 	bHuman.attack();
// 	std::cout << std::endl;
// }

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}