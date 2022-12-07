/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:54:36 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/07 11:09:01 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

class Data {

    private :

        std::string _data;

    public :

        Data( void );
        Data( std::string const str );
        Data( const Data& ref );
        ~Data( void );

        Data&   operator=( const Data& );

        std::string getData( void ) const;
};

uintptr_t serialize( Data* p );
Data*   deserialize( uintptr_t r );


#endif