/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:55:56 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/28 18:01:12 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

    public :

        RobotomyRequestForm( void );
        RobotomyRequestForm( const std::string );
        RobotomyRequestForm( const RobotomyRequestForm& );
        ~RobotomyRequestForm( void );
        
        RobotomyRequestForm&    operator=( const RobotomyRequestForm& );

        void                    execute( const Bureaucrat& ) const;
};

#endif