/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:26:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/21 15:48:59 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

    /////////////////////////////////
    //                             //
    //      mendatory main part    //
    //                             //
    /////////////////////////////////
    
    Animal   *tabAnimal[10];
    int i;

    i = 0;
    while ( i < 10 ) {
    
        if ( ( i % 2 ) == 0 )
            tabAnimal[i] = new Cat();
        else
            tabAnimal[i] = new Dog();
        i++;
    }

    std::cout << std::endl;
    
    i = 0;

    while ( i < 10 )
        std::cout << BLU << "The " << tabAnimal[i]->getType() << " says " << CRESET, tabAnimal[i++]->makeSound();

    std::cout << std::endl;

    i = 0;
    while ( i < 10 ) {

        delete( tabAnimal[i++] );
	}
    
    std::cout << std::endl << std::endl;

    /////////////////////////////////
    //                             //
    //        testing ideas        //
    //                             //
    /////////////////////////////////

	Cat	*leChat = new Cat();
    std::cout << std::endl;
	
	std::string idea0 = "Miaou";
	std::string idea1 = "J\'ai faim wsh";
	leChat->setIdeas( idea0, 0 );
	leChat->setIdeas( idea1, 1 );

    std::cout << BLU << leChat->getIdeas(0) << CRESET << std::endl;
    std::cout << BLU << leChat->getIdeas(1) << CRESET << std::endl;
    
    std::cout << std::endl << std::endl;

    delete( leChat );

    std::cout << std::endl << std::endl;

    /////////////////////////////////
    //                             //
    //        What the heck        //
    //                             //
    /////////////////////////////////

    WrongAnimal *ChirpLeChat = new WrongCat;

    std::cout << BLU,  ChirpLeChat->makeSound(), std::cout << CRESET;
    // is my cat broken ?? why does it chirp ???
    
    std::cout << std::endl << std::endl;
    
    delete( ChirpLeChat );
    
    std::cout << std::endl << std::endl;
    
    /////////////////////////////////
    //                             //
    //        Abstract stuff       //
    //                             //
    /////////////////////////////////

    // Animal  *animal = new Animal();
    
    // animal->makeSound();

    return 0;
}