#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

class Country{
public:
    void setId(const int &);
    int getId() const;

    void setPrice(const int &);
    int getPrice() const;

    void setFine(const int *, const int &);
    int getFine(const int &) const;

    void setName(const string &);
    string getName() const;
private:
    int id = 0, price = 0, *fine = 0;
    string name;
};

#endif