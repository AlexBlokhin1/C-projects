//
// Created by user on 12.03.18.
//

#ifndef C_PROJECTS_DOGS_NAME_HELPER_H
#define C_PROJECTS_DOGS_NAME_HELPER_H

#include <iostream>
#include <vector>


struct Dog
{
    std::string dogs_nickname;
    int age;

    Dog()
    {
        this->dogs_nickname = "";
        this->age = 1;
        std::cout << "CONSTRUCTOR.0:DOG '" << dogs_nickname << "' CREATED" << std::endl;

    }
    Dog(const Dog & dog) {
        std::cout << "COPY.0:DOG '" << dogs_nickname << "' INVOKED" << std::endl;
        //return dog;
    }
    ~Dog()
    {
    }

    Dog(std::string dogs_nickname, int age)
    {
        this->dogs_nickname = dogs_nickname;
        this->age = age;

        std::cout << "CONSTRUCTOR.1:DOG '" << dogs_nickname << "' CREATED" << std::endl;
    }
};

std::vector<Dog> dogs_name_and_age();
Dog dog_factory();


#endif //C_PROJECTS_DOGS_NAME_HELPER_H
