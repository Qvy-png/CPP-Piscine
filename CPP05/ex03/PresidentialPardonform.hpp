/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonform.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:29:54 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/28 19:07:13 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#ifndef FORM_HPP
# include "Form.hpp"
#endif

class PresidentialPardonForm : public Form {

    public :
        PresidentialPardonForm( void );
        PresidentialPardonForm( const std::string );
        PresidentialPardonForm( const PresidentialPardonForm& );
        ~PresidentialPardonForm( void );

        PresidentialPardonForm&     operator=( const PresidentialPardonForm& );
        
        void                        execute( const Bureaucrat& ) const ;
};

#endif