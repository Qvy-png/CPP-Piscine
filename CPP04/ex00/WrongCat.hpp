/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:32:15 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/15 22:33:27 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

    public:

		WrongCat( void );
		WrongCat( const WrongCat& );
		~WrongCat( void );
		
		WrongCat& operator=( const WrongCat& );

		void	makeSound( void ) const;
};

#endif