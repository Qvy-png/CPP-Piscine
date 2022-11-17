/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:26:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 17:21:53 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // const Brain* cb = new Brain();

    // i->_ideas = cb;
    
    delete j;//should not create a leak
    delete i;
    // ...
    return 0;
}