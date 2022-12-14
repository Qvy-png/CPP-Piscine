/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:23:07 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/14 13:48:47 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include "color.hpp"

class Span {

    private:
    
        size_t              _size;
        std::vector<int>    _vec;
    
    public:

        Span( void );
        Span( size_t );
        Span( const Span& );
        ~Span( void );

        Span&   operator=( const Span& );
        
        void    displayVec( void );
        void    addNumber( size_t );
        size_t  shortestSpan( void );
        size_t  longestSpan( void );

        class   alreadyInVec : public std::exception {
        
            public:

                virtual const char* what ( void ) const throw() {
                
                    return ( REDHB "Value already exists" CRESET );
                }
        };

        class   noNumber : public std::exception {
        
            public:

                virtual const char* what ( void ) const throw() {
                
                    return ( REDHB "No number in vector" CRESET );
                }
        };

        class   tooMuch : public std::exception {
        
            public:

            virtual const char* what ( void ) const throw() {
            
                return ( REDHB "Vector full" CRESET );
            }
        };
        
};

#endif