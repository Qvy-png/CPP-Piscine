/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:08:14 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/06 14:42:39 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize( Data *p ) {

    return ( reinterpret_cast<uintptr_t>( p ) );
}

Data* deserialize( uintptr_t r ) {

    return ( reinterpret_cast<Data*>( r ) );
}