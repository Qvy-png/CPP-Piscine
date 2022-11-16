/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:09:55 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 12:30:37 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main( void ) {

	int	i, j;
	i = 3;
	j = 0;
	
	Zombie* Zombie;
	std::string input;
	input = "Gerard";

//---------------------------------------//
//			creation de la horde		 //
//---------------------------------------//

	Zombie = zombieHorde( i, input );

//---------------------------------------//
//			 annonce de la horde 		 //
//---------------------------------------//

	if ( i > 0 ) {

		while ( j < i ) {

			Zombie[j].announce();
			j++;
		}
		delete[] Zombie;
	}
	else
		std::cout << REDHB << "The integer \"i\" can't be below 1!" << CRESET << std::endl;
}