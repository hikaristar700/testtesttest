#ifndef LAND_H
#define LAND_H

#include <vector>

class Land
{
    public:
        virtual void print() const;
    protected:
        std::vector <int> who_is_here = nullptr;
};

#endif