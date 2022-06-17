#include "Jail.h"
#include <iostream>

virtual void Jail::print() const
{
    std::cout << "=";
    for( &i : who_is_here )
    {
        cout << i;
    }
    std::cout << "\t= [" << id_ << "]" << "\t" << name_ << "\t\t" << std::endl;
}