/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:00:51 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/04/25 16:21:14 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.hpp"
#include <iostream>
#include <deque>
#include <list>
#include <string>
#include <cstdlib>

//the class will use the two containers list and deque

class PmergeMe
{
    private:
        
        int     *array;
        int     size;
        std::list<int>  list;
        std::deque<int> deque;
        
    public:

        PmergeMe( void );
        PmergeMe(PmergeMe const & src);
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const & rhs);
        void    mergeSort(int *array, int size);
        void    merge(int *array, int size);
        void    printArray(int *array, int size);
};
