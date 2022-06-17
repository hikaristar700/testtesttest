#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include "Land.h"

class Country : public Land
{
    public:
        virtual void print() {} const;
        virtual int calculatefine() {} const;

    private:
        int id_ = 0, price_ = 0;
        string name_ ="";
};

class Upgradableconutry : public Country
{
    public:
        virtual void print() const;
        virtual int calculatefine() const;

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