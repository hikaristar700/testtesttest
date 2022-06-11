#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
public:
    void setId(const int &);
    int getId() const;

    void setName(const string &);
    string getName() const;

    void changeWallet(const int &);
    int getWallet() const;

    void changeUnit();
    int getUnit() const;
private:
    int id = 0, wallet = 30000, unit = 0;
    string name;
};

#endif