#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
    public:
        void setId(const int &);
        int getId() const;

        void setName(const string &);
        string getName() const;

        void changeMoney(const int &);
        int getMoney() const;

        void changeUnit();
        int getUnit() const;
    private:
        int id_ = 0, money_ = 30000, unit_ = 0;
        std::string name_;
};

#endif