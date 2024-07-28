#include "BackEnd.h"

BackEnd::BackEnd()
{
    Player = new Player();
}

BackEnd::~BackEnd()
{
}

int BackEnd::GetRandomNumber(){
    //return a rand between 1 and 3

    return m_randomChance;
}

string BackEnd::SimulateGame(double betAmountFromUser){
    m_amountBet = betAmountFromUser;
    //get random number whatever case it goes to, will
    //return that string back to UI to show the game
    switch (GetRandomNumber())
    {
    case 1:
        return "C"
        break;
    
    case 2:
        return 7
        break;
    
    case 3:
        return "A";
        break;
    
    default:
        break;
    }
}

bool BackEnd::CheckIfWon(string[] slotArray){
    //once the game is simulated, check to see if the user won or not

    if (m_ifWon)
    {
        AddWinningsToUser();
        return true;
    } else {
        SubtractLosesToUser();
        return false;
    }
    
}


void BackEnd::AddWinningsToUser(){
    double winnings = m_amountBet * 2;

    Player->AddWinings(winnings);

    cout << "\n You won " << winnings << "!!!!";
}

void BackEnd::SubtractLosesToUser(){
    Player->SubtractLoses(m_amountBet);

    cout << "\nTry again! You will hit it big on the next one\n";
}