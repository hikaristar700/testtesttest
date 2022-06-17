#ifndef MAP_H
#define MAP_H

#include <vector>

#include "Land.h"
#include "Player.h"

class Map
{
    public:
        void print() const;
    private:

        std::vector<Land*> lands_ = nullptr;
        std::vector<Player*> players_ = nullptr;
};

#endif