/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <rdel-agu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:00:48 by rdel-agu          #+#    #+#             */
/*   Updated: 2023/04/25 17:26:04 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void )
{
    return ;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
    *this = src;
    return ;
}

PmergeMe::~PmergeMe()
{
    return ;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
    if (this != &rhs)
    {
        this->array = rhs.array;
        this->size = rhs.size;
        this->list = rhs.list;
        this->deque = rhs.deque;
    }
    return *this;
}

//PmergeMe::mergeSort and PmergeMe::merge should be using the two dockers present in the class

void    PmergeMe::mergeSort(int *array, int size)   {
    
    int i;

    for (i = 0; i < size; i++)
        this->list.push_back(array[i]);
    this->merge(array, size);
}

void PmergeMe::merge(int *array, int size)  {

    if (size < 2)
        return;
    // Split the deque into two halves
    int n1 = size / 2;
    int n2 = size - n1;
    std::deque<int> left(array, array + n1);
    std::deque<int> right(array + n1, array + size);

    // Recursively sort each half
    merge(&left[0], n1);
    merge(&right[0], n2);

    // Merge the sorted halves
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {

        if (left[i] <= right[j]) {
            
            array[k] = left[i];
            i++;
        } else {
            
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {

        array[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        
        array[k] = right[j];
        j++;
        k++;
    }

    // Print the sorted array
    this->printArray(array, size);
}



void    PmergeMe::printArray(int *array, int size)
{
    int i;

    for (i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}