//
// Created by user on 12.03.18.
//
#include <iostream>
#include <vector>
#include <ctime>
#include "dogs_name_helper.h"

int random_age()
{
    int ages[] = {1, 3, 12, 4 , 13, 6, 8, 5};
    return ages[rand() % 7];
}

std::string random_name()
{
    std::string names[] = {"Sam", "Charly", "Nicky"};
    return names[rand() % 2];
}

std::vector<Dog> dogs_name_and_age()
{
    std::vector<Dog> dogs;
    dogs.emplace_back(Dog(random_name(), random_age()));
    return dogs;
}
// dogs.emplace_back(Dog(random_name(), random_age()));
// Dog(random_name(), random_age());
//dogs.emplace_back - push XXX into a vector


Dog dog_factory()
{
    return Dog(random_name(), random_age());
}


