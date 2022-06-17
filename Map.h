#ifndef MAP_H
#define MAP_H

#include <vector>

#include "Land.h"
#include "Player.h"

class Map
{
    public:
        void Print() const;
    private:

        std::vector<Land*> lands_;
        std::vector<Player*> players_;
};

#endif