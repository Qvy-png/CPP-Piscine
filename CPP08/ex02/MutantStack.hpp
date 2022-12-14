/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:28:52 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/14 15:14:15 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

    public:
        
        MutantStack<T>( void ) { }
        MutantStack<T>( const MutantStack& ref ) { *this = ref; }
        ~MutantStack<T>( void ) { }
        
        MutantStack&    operator=( const MutantStack& ref ) {
        
            if ( *this == ref )
                return ( *this );
            this->c = ref.c; //member object
            return ( *this );
        }
    
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator    begin( void )
		{
			return ( this->c.begin() );
		}

		iterator	end( void )
		{
			return ( this->c.end() );
		}

};

#endif