#include <iostream>
#include <string>

#include "Game.h"

using namespace std;
int Upgradableconutry::num_ = 0;
int Collectablecountry::num_ = 0;
int Randomcostcountry::num_ = 0;
int Jail::num_ = 0;

int Totalnum()
{
    cout << Upgradableconutry::Totalnum() <<" "<< Collectablecountry::Totalnum() <<" "<< Randomcostcountry::Totalnum() <<" "<< Jail::Totalnum() << endl;
    return Upgradableconutry::Totalnum() + Collectablecountry::Totalnum() + Randomcostcountry::Totalnum() + Jail::Totalnum();
}

int main(void)
{
    cout << "test" << endl;
    cout << Totalnum() << endl;
    vector<int> tmp(10, 0);
    Collectablecountry a(0, 25, "ad");
    cout << Totalnum() << endl;
    Upgradableconutry b(0, 2000, "651", tmp);
    cout << Totalnum() << endl;
    return 0;
}