#ifndef LAND_H
#define LAND_H

#include <vector>

class Land
{
    public:
        Land() { Land_num_++; };
        ~Land() { Land_num_--; };

        static int get_land_num() { return Land_num_; };
        virtual void print() const;
        static int Land_num_;
    protected:
        std::vector <int> who_is_here;
    private:
};

// int Land::Land_num_ = 0;
#endif