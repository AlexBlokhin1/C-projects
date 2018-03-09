//
// Created by user on 09.03.18.
//

#ifndef WORD_WRAP_FALCON1_HELPER_H
#define WORD_WRAP_FALCON1_HELPER_H

#include <iostream>


struct debtors
{
    std::string full_name;
    std::string subject;
    int number_of_attempts;

    debtors()
    {
        this->full_name = "";
        this->subject = "";
        this->number_of_attempts = 1;
    }

    debtors(std::string full_name, std::string subject, int number_of_attempts)
    {
        this->full_name = full_name;
        this->subject = subject;
        this->number_of_attempts = number_of_attempts;

    }
};

#endif //WORD_WRAP_FALCON1_HELPER_H
