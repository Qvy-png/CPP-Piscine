/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:31:40 by rdel-agu          #+#    #+#             */
/*   Updated: 2022/12/16 11:44:30 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    /////////////////////////////////
    //                             //
    //          main sujet         //
    //                             //
    /////////////////////////////////
   { 
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
   }
    /////////////////////////////////
    //                             //
    //          main perso         //
    //                             //
    /////////////////////////////////
   {
    std::cout << std::endl << std::endl;

    MutantStack<int>    mutant;
    std::list<int>      liste;
    int                 i = 0;
    
    while ( i < 40 ) {
    
        mutant.push( i );
        liste.push_back( i );
        i++;
    }
    MutantStack<int>::iterator it = mutant.begin();
    MutantStack<int>::iterator ite = mutant.end();
    std::list<int>::iterator lst = liste.begin();
    std::list<int>::iterator lste = liste.end();
    
    while ( ( it != ite ) && ( lst != lste ) ) {
    
        std::cout << *it << " " << *lst << std::endl;
        ++it;
        ++lst;
    }
    return ( 0 );
   }
}