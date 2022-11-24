/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:31:10 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/11/24 14:44:16 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form {
    
    private:

        const std::string   _name;
        bool                _isSigned;
        int                 _signGrade;
        int                 _execGrade;

    public:

        class GradeTooHighException : public std::exception {
        
            public:

                virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception {
        
            public:

                virtual const char* what() const throw();
        };
};

#endif