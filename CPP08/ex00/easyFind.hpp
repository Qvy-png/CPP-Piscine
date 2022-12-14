/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:56:49 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/14 12:20:52 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include "color.hpp"

class   NotInContainer : public std::exception {

    public:
    
        virtual const char* what ( void ) const throw() {
        
            return ( REDHB "Value not found in the container" CRESET );
        }
};

template<typename T>
int easyFind( T c, int i ) {

    if ( std::find( c.begin(), c.end(), i ) != c.end() )
        return ( 1 );
    else
        throw NotInContainer();
}



#endif