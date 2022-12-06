/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:11:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/06 14:43:56 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "color.hpp"

int main( void ) {

    Data        data("Hello");
    uintptr_t   p;
    
    std::cout << GRN "address: " << &data << ", of value: " << data.getData() << CRESET << std::endl;
    p = serialize( ( Data* ) &data );

    std::cout << CYN "serialized: " << p << CRESET << std::endl;
    std::cout << GRN "deserialize: " << deserialize( p ) << ", of value: " << deserialize( p )->getData() << CRESET << std::endl;

}