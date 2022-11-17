/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:22:56 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/16 14:42:19 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include "color.hpp"

class WrongAnimal {

	protected:

		std::string _type;

	public:

		WrongAnimal( void );
		WrongAnimal( const std::string );
		WrongAnimal( const WrongAnimal& );
		virtual ~WrongAnimal( void );
		
		WrongAnimal& operator=( const WrongAnimal& );

		virtual void			makeSound( void ) const;
		std::string		getType( void ) const;
		void			setType( const std::string type );
};


#endif