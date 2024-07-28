#include "UI.h"
#include "User.h"

int main(int argc, char **argv){
    UI *startGame = new UI();
    User *player =  new User();

    startGame->PrintSlot();

}