/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:55:19 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/21 13:48:11 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string> 

class Brain {

    private:

        std::string _ideas[100];

    public:

        Brain( void );
        Brain( const Brain &ref );
        ~Brain( void );
        
        Brain& operator=( const Brain &ref );

        std::string     getIdeas( int ) const;
        void            setIdeas( const std::string, int );

};

#endif