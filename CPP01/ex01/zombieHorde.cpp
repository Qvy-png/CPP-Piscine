/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:11:11 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/10/17 15:05:06 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {

    int i;

    i = 0;
    if (N > 0) {
    
        Zombie* zombie = new Zombie[N];
        while ( i < N ) {

            zombie[i].setName( name );
            i++;        
        }
        return (zombie);
    }
	return ( NULL );
}
