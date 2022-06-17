#include "Country.h"

Upgradableconutry::Upgradableconutry( int price, std::string name, std::vector<int> &fine ) : Country(price, name), fine_(fine)
{
    id_ = Land_num_;
}