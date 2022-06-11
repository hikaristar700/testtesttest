#include "Country.h"

void Country::setId(const int &input){ id = input; }

int Country::getId() const { return id; }

void Country::setPrice(const int &input){ price = input; }

int Country::getPrice() const { return price; }

void Country::setFine(const int *input, const int &size){
    fine = new int[size]()

    for(int i = 0; i < size; ++i){
        fine[i] = input[i];
    }
}

void Country::getFine(const int &pos) const { return fine[pos]; }

void Country::setName(const string &str){ name = str; }

string Country::getName() const { return name; }