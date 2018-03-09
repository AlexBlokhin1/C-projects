//
// Created by user on 06.03.18.
//
#include <iostream>
#include<vector>

std::vector<int> falcon(unsigned int limit)
{
    std::vector<int> test_vector(limit);
    for(int i = 0; i < limit; i++)
    {
        test_vector[i] = i;
    }

    return test_vector;
}
