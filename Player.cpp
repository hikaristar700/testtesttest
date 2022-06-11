#include "Player.h"

void Player::setId(const int &input){ id = input; }

int Player::getId() const { return id; }

void Player::setName(const string &str){ name = str; }

string Player::getName() const { return name; }

void Player::changeWallet(const int &input){ wallet += input; }

int Player::getWallet() const { return wallet; }

void Player::changeUnit(){ ++unit; }

int Player::getUnit() const { return unit; }