#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <vector>

#include "Land.h"
class Country : public Land
{
    public:
        Country(int price, std::string name): price_(price), name_(name) {};
        ~Country() {};
        virtual void print() const;
        virtual int calculatefine() const;

    protected:
        int id_ = 0, price_ = 0;
        bool have_owner = false;
        int owner_ = -1;

        std::string name_ ="";
};

class Upgradableconutry : public Country
{
    public:
        Upgradableconutry( int price, std::string name, std::vector<int> &fine );
        virtual void print() const;
        virtual int calculatefine() const;
    private:
        std::vector<int> fine_;
        int level_ = 1;
};

class Collectablecountry : public Country
{
    public:
        virtual void print() const;
        virtual int calculatefine() const;
};

class Randomcostcountry : public Country
{
    public:
        virtual void print() const;
        virtual int calculatefine() const;
};

#endif