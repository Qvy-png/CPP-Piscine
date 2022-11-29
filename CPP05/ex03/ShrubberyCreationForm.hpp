/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberycreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:02:01 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/28 17:57:25 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {

    public :

        ShrubberyCreationForm( void );
        ShrubberyCreationForm( const std::string );
        ShrubberyCreationForm( const ShrubberyCreationForm& );
        ~ShrubberyCreationForm( void );

        ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );

        void                   execute( Bureaucrat const &) const; 
};

#endif
