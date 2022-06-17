#ifndef JAIL_H
#define JAIL_H

#include "Land.h"
#include <string>

class Jail : public Land
{
    public:
        virtual void print() const;
    private:
        int id_ = 0;
        std::string name_ = "Jail";
};

#endif