#include "Country.h"

void Country::setId(const int &input)
{ 
    id_ = input; 
}

int Country::getId() const 
{ 
    return id_; 
}

void Country::setPrice(const int &input)
{
    price_ = input;
}

int Country::getPrice() const 
{
    return price_;
}

void Country::setFine(const int *input, const int &size)
{
    fine_ = new int[size]()

    for(int i = 0; i < size; ++i)
    {
        fine[i] = input[i];
    }
}

void Country::getFine(const int &pos) const 
{ 
    return fine[pos]; 
}

void Country::setName(const string &str)
{ 
    name_ = str; 
}

string Country::getName() const 
{ 
    return name_; 
}