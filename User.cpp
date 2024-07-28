#include "User.h"

User::User()
{
    m_moneyTotal = 1,000;
    m_wins = 0;
    m_loses = 0;
}

User::~User()
{
}

void User::PrintTotalAmountOfMoney(){
    cout << "\nYou currently have " << m_moneyTotal << 
        " in your account. \n Please spend wiseley\n";
}

void User::AddWinings(double winingAmount){
    m_moneyTotal += winingAmount;
}

void User::SubtractLoses(double moneyBet){
    m_moneyTotal -= moneyBet;
}