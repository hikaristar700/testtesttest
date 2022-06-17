#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <vector>
#include <iostream>

#include "Land.h"

class Country : public Land
{
    public:
        Country(int id, int price, std::string &name): Land(id), price_(price), name_(name) {};
        ~Country() {};
        virtual void Print() const {};
        virtual int Calculatefine() const 
        {
            return -1;
        };

    protected:
        int price_ = 0;
        bool have_owner = false;
        int owner_ = -1;

        std::string name_ ="";
    private:
};

class Upgradableconutry : public Country
{
    public:
        Upgradableconutry( int id, int price, std::string name, std::vector<int> &fine ): Country(id, price, name), fine_(fine)
        {
            num_++;
            for( auto &i : fine_ )
            {
                std::cout << i << " " << std::endl;
            }
        };
        ~Upgradableconutry(){ num_--; };
        virtual void Print() const {};
        virtual int Calculatefine() const 
        {
            return 1;
        };
        static int Totalnum()
        {
            return Upgradableconutry::num_;
        }
    private:
        std::vector<int> fine_;
        int level_ = 1;
    private:
        static int num_;
};


class Collectablecountry : public Country
{
    public:
        Collectablecountry( int id, int price, std::string name ) : Country(id, price, name) { num_++; };
        ~Collectablecountry() { num_--; };
        virtual void Print() const {};
        virtual int Calculatefine() const 
        {
            return 1;
        };
        static int Totalnum()
        {
            return Collectablecountry::num_;
        }
    private:
        static int num_;
};


class Randomcostcountry : public Country
{
    public:
        virtual void Print() const {};
        virtual int Calculatefine() const
        {
            return 1;
        };
        static int Totalnum()
        {
            return Randomcostcountry::num_;
        }
    private:
        static int num_;
};


#endif