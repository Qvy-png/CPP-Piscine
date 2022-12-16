/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:28:52 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/16 11:34:24 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

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