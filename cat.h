//
// Created by user on 19.03.18.
//

#ifndef C_PROJECTS_CATS_HELPER_H
#define C_PROJECTS_CATS_HELPER_H

#include <iostream>
#include <ctime>

class Cat
{
    std::string name;
    std::string colour;
    int cats_age;

public:Cat()
    {
        const static std::string names[] = {"Mekis", "Felix", "Max"};
        const static std::string colours[] = {"Black", "Grey", "Orange", "White"};
        int ages[] = {1, 2, 3, 4, 5};

        this->name = names[rand() % 3];
        this->colour = colours[rand() % 4];
        this->cats_age = ages[rand() % 5];

        std::cout<<" I was born. "<< std::endl;
    }

Cat(const Cat & cat)
{
    std::cout<<"COPY OPERATOR HAS BENN CREATED"<<std::endl;
    this->name = "CLONE of <" + std::string(cat) + ">";
    this->name = cat.name;
    this->colour = cat.colour;
    this->cats_age  = cat.cats_age;
}

public: Cat & operator=(const Cat & cat)
    {
        std::cout << "Working COPY operator" << std::endl;
        this->name = cat.name;
        this->colour = cat.colour;
        this->cats_age  = cat.cats_age;
    }

public: ~Cat()
    {
        std::cout<<"We all have dead"<<std::endl;
    }

public:operator std::string() const
    {
        const char *how_old = this->cats_age > 10 ? "TOO OLD" : "pretty young";
        return "I am a " + std::string(how_old)
               + " " + this->colour
               + ". My name is "  + this->name
               + "! ";
    }

};

Cat cat_factory();
#endif //C_PROJECTS_CATS_HELPER_H
