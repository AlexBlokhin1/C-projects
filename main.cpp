#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include "falcon1.h"
#include "falcon1_helper.h"


void even_number(int limit)
{
    int number_of_even = 0;
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> current_figure(1, 1000);
    std::vector<double> result(10);


    for(;;)
    {
        if(number_of_even == limit)
        {
            break;
        }

        auto value = int(current_figure(mt));
        if (value % 2 == 0)
        {
            number_of_even ++;
            std::cout << "Even: " << value << std::endl;
            return;
        }
    }
}


bool my_sort_function (debtors a, debtors b) {
//bool my_sort_function (debtors *a, debtors *b) {
    return (a.number_of_attempts < b.number_of_attempts);
}

int main(int argc, char **argv) {
//    std::cout<<std::endl;

    debtors debtors_list[4];
    debtors *dx = list_of_debtors(debtors_list);
    std::sort(&dx[0], &dx[4], my_sort_function);

    for (int i = 0; i < 4; i++) {
        debtors *d = &dx[i];
        std::cout << "Full name: " << d->full_name << ", Subject: " << d->subject << ", Number of attempts: "
                  << d->number_of_attempts << std::endl;

    }
    std::vector<debtors> dpeptor_collection = list_of_debtors();

    for (int i = 0; i < dpeptor_collection.size(); i++)
    {
        auto dt = dpeptor_collection[i];
        std::cout
                <<"Full name: "<< dt.full_name
                << " Subject: "<< dt.subject
                <<" Number of attemps: "<< dt.number_of_attempts
                <<std::endl;
        //std::cout <<std::vector<debtors>list_of_debtors();

    }
    for (std::vector<debtors>::const_iterator it = dpeptor_collection.begin() ; it != dpeptor_collection.end(); it++) {
        //it->full_name = "HAHAHAHAHA";
        std::cout << ' ' << it->full_name;
        std::cout << ' ' << (*it).full_name;
        std::cout << ' ' << (*it).subject;
        std::cout << ' ' << (*it).number_of_attempts;
        std::cout << '\n';


    }
    return 0;
}
