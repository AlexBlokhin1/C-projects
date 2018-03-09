//
// Created by user on 06.03.18.
//
#include <iostream>
#include <algorithm>
#include "falcon1.h"
#include <stdlib.h>
#include "falcon1_helper.h"

//std::vector<debtors>
debtors * list_of_debtors(debtors *debtors_list)
{
    //debtors debtors_list[3];

    for (int i=0; i<4; i++)
    {
        debtors_list[0] = debtors("Ivanov Ivan Ivanovich", "Math", 2);
        debtors_list[1] = debtors("Petrov Petr Petrovich ", "Physics", 4);
        debtors_list[2] = debtors("Araratov Ararat Araratovich", "OKO", 3);
        debtors_list[3] = debtors("Alexandrov Alex Alekseevich", "Chemistry", 5);

        debtors *d = &debtors_list[i];
//
//        std::cout << "Full name: " << d->full_name << ", Subject: " << d->subject << ", Number of attempts: "
//                  << d->number_of_attempts << std::endl;
//          std::cout << debtors_list<<std::endl;
    }

    return debtors_list;
}

std::vector<debtors> list_of_debtors()
{
    std::vector<debtors> res;
    res.emplace_back( debtors("Ivanov Ivan Ivanovich", "Math", 2));
    res.emplace_back( debtors("Petrov Petr Petrovich ", "Physics", 4));
    res.emplace_back( debtors("Araratov Ararat Araratovich", "OKO", 3));
    res.emplace_back( debtors("Alexandrov Alex Alekseevich", "Chemistry", 5));

    return res;
}