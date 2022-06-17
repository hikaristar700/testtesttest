#ifndef LAND_H
#define LAND_H

#include <vector>

class Land
{
    public:
        Land(int id) : id_(id) {};
        ~Land() {};

        virtual void Print() const {};
    protected:
        std::vector <int> who_is_here;
        int id_ = 0;
    private:
};

// int Land::Land_num_ = 0;
#endif