/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:09:53 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/08 16:32:41 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename F>
void    iter( T* array, unsigned int size, F func ) {

    unsigned int i;

    i = 0;
    while ( i < size ) {
    
        func( array[i] );
        i++;
    }
}

#endif