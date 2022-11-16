/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:36:27 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/07 12:22:57 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {

	Zombie *ZombieHeap;
	std::string input;
	
//---------------------------------------//
//				newZombie				 //
//---------------------------------------//

	input = "heapZombie";
	ZombieHeap = newZombie( input );
	ZombieHeap->announce();
	delete ZombieHeap;

//---------------------------------------//
//				randomChump				 //
//---------------------------------------//
	input = "stackZombie";
	randomChump( input );
}