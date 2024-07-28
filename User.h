#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User
{
private:
    double m_moneyTotal;
    int m_wins;
    int m_loses;
public:
    User();
    ~User();
    void PrintTotalAmountOfMoney();
    void AddWinings(double winingAmount);
    void SubtractLoses(double moneyBet);
};

#endif