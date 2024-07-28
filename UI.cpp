#include "UI.h"

UI::UI()
{
    m_slot = new string[];
    m_boarder = new char[][];
    m_game = new BackEnd();
}

UI::~UI(){}

void UI::PrintSlot(){

    for(int i = 0; i < m_boarder.length; ++i){
            for(int j = 0; j < m_boarder[i].length; ++j){
                if (j == 0){
                    m_boarder[i][j] = '|';
                } else if (i == 0) {
                    m_boarder[i][j] = '=';
                } else if (j == m_boarder[0].length - 1){
                    m_boarder[i][j] = '|';
                } else if (i == m_boarder.length - 1) {
                    m_boarder[i][j] = '=';
                } else {
                    m_boarder[i][j] = ' ';
                }
            }
        }
    for (int i = 0; i < 3; ++i)
    {
        //need to figure out how to communicate amount bet
        m_slot[i];
        cout << m_slot[i] << " ";
    }

    m_game->SimulateGame(m_slot);
}
