/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:50:38 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/06 16:26:16 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include "color.hpp"

class Base {

    public:
    
        virtual ~Base( void );
};

class A : public Base {

    public:
    
        A( void );
};

class B : public Base {

    public:
    
        B( void );
};

class C : public Base {

    public:
    
        C( void );
};

Base*   generate( void );
void    identify( Base* p );
void    identify( Base& p );


#endif