/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:26:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 14:43:28 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << std::endl;

const WrongAnimal* wa = new WrongAnimal();
const WrongAnimal* wc = new WrongCat();
std::cout << std::endl;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << meta->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << std::endl;

std::cout << wa->getType() << " " << std::endl;
std::cout << wc->getType() << " " << std::endl;
wa->makeSound();
wc->makeSound();
std::cout << std::endl;

delete( meta );
delete( i );
delete( j );
std::cout << std::endl;

delete( wa );
delete( wc );
return 0;
}