/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:26:31 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 14:41:14 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "color.hpp"

class Animal {

	protected:

		std::string _type;

	public:

		Animal( void );
		Animal( const std::string );
		Animal( const Animal& );
		virtual ~Animal( void );
		
		Animal& operator=( const Animal& );

		virtual void			makeSound( void ) const;
		std::string		getType( void ) const;
		void			setType( const std::string type );
};

#endif