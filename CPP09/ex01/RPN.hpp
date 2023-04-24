/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:48:49 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/04/24 16:17:32 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <iostream>
#include <stack>
#include "color.hpp"

class RPN
{
    private:
    
        std::string _str;
        std::stack<int> _stack;
   
    public:
    
        RPN(void);
        RPN(std::string str);
        RPN(RPN const &src);
        ~RPN(void);
        
        RPN     &operator=(RPN const &src);
        bool    parse(void);
};

#endif