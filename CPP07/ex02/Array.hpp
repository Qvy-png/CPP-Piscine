/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:28:39 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/09 14:37:26 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

    private :

        
        
    public :
    
        Array( void );
        Array( unsigned int n );
        Array( const Array& );
        ~Array( void );

        operator=( const Array& );

        T* getArray() const;
};

#endif