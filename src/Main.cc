#include <iostream>
#include "Soldier.hh"

int main()
{

    
    Character soldier;
    soldier.init();
    soldier.kd(35 , 12);
    soldier.X = 2;
    soldier.playerStreak();
    std::cout <<" "<< std::endl;
    soldier.onlinePlayers(12);
    std::cout <<" "<< std::endl;
    soldier.printPlayer();
    std::cout <<" "<< std::endl;  
    soldier.printRounds();
    std::cout <<" "<< std::endl;
    soldier.printMap();

    std::cin.get();
}

