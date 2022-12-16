/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:23:07 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/16 11:20:53 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <iterator>
# include "color.hpp"

# define INT_MAX 2147483647

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

        void    addIter( std::vector<int>::iterator, std::vector<int>::iterator );

        class   tooMuchRange : public std::exception {
        
            public:

                virtual const char* what ( void ) const throw() {
                
                    return ( REDHB "The range you're trying to add is too big" CRESET );
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