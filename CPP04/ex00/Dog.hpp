/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:02:25 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/15 22:17:41 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

    public:

		Dog( void );
		Dog( const Dog& );
		~Dog( void );
		
		Dog& operator=( const Dog& );

		void	makeSound( void ) const ;
};

#endif