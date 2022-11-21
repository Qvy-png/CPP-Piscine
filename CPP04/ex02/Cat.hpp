/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:21:51 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/21 14:17:57 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	private:

		Brain*		_ideas;

    public:

		Cat( void );
		Cat( const Cat& );
		~Cat( void );
		
		Cat& operator=( const Cat& );

		void	makeSound( void ) const;
		std::string	getIdeas( int ) const;
		void		setIdeas( std::string, int );
};

#endif