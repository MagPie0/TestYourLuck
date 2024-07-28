#ifndef UI_H
#define UI_H
#include "BackEnd.h"

class UI
{
private:
    string m_slot[3];
    char m_boarder[6][3];
    BackEnd* m_game;
public:
    UI();
    ~UI();
    void PrintSlot();
};


#endif