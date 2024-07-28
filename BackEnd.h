#ifndef BACKEND_H
#define BACKEND_H
#include "User.h"

class BackEnd
{
private:
    int m_randomChance;
    double m_amountBet;
    string m_slot;    
    bool m_ifWon;
    User *Player;

public:
    BackEnd();
    ~BackEnd();

    int GetRandomNumber();
    string SimulateGame(double betAmountFromUser);
    bool CheckIfWon(string[] slotArray);
    void AddWinningsToUser();
    void SubtractLosesToUser();
};


#endif