#include <iostream>
#include "dogs_name_helper.h"
#include "cat.h"
#include <cstdlib>



int main(int argc, char **argv)
{
    //std::vector<Dog> mass = dogs_name_and_age();
    //Dog mypeppy = dog_factory();
    Cat old_cat = cat_factory();
    Cat new_cat = old_cat;
    Cat xxx_cat = Cat();
    xxx_cat = old_cat;

    //std::cout<< new_cat.cats_name<<new_cat.cats_colour<<new_cat.cats_age<<std::endl;
    std::cout << "---------------------------------" <<std::endl;
    std::cout << std::string(old_cat) <<std::endl;
    std::cout << std::string(new_cat) <<std::endl;
    std::cout << std::string(xxx_cat) <<std::endl;
    std::cout << "---------------------------------" <<std::endl;

//    std::cout << std::string(cat_factory()) <<std::endl;



//    for (int i = 0; i < mass.size(); i++)
//    {
//        auto dt = mass[i];
//        std::cout
//                <<"Dogs nickname : "<< dt.dogs_nickname
//                <<", Age: "<< dt.age
//                <<std::endl;
//
//    }
    std::cout<<"End of program"<<std::endl;
    return 0;
}