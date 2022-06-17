#ifndef JAIL_H
#define JAIL_H

#include "Land.h"
#include <string>
#include <iostream>

class Jail : public Land
{
    public:
        virtual void print() const
        {
            std::cout << "=";
            for( auto &i : who_is_here )
            {
                std::cout << i;
            }
            std::cout << "\t= [" << id_ << "]" << "\t" << name_ << "\t\t" << std::endl;
        };
    private:
        int id_ = 0;
        std::string name_ = "Jail";
};

#endif