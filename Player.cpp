#include "Player.h"

void Player::setId(const int &input)
{ 
    id_ = input; 
}

int Player::getId() const 
{ 
    return id_; 
}

void Player::setName(const std::string &str)
{ 
    name_ = str; 
}

string Player::getName() const 
{ 
    return name_; 
}

void Player::changeWallet(const int &input)
{ 
    money_ += input; 
}

int Player::getWallet() const 
{ 
    return money_;  
}

void Player::changeUnit()
{ 
    ++unit_; 
}

int Player::getUnit() const 
{ 
    return unit_; 
}