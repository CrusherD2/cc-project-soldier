#pragma once
#include <iostream>
#include "Stats.hh"
#include <string>

class Character : public Entity
{
public:
    std::string username;
    int streak = 25;
    std::string weapon;
    std::string map;

    void init()
    {
        username = "ArthurD2";
        weapon ="PPSH-71";
        map = "NukeTown";
        
    }

    void printMap()
    {

        std::cout << "Map: " << map << std::endl;

    }

    void printPlayer()
    {

        std::cout << "Username: " << username << std::endl;
        std::cout << "Current weapon: " << weapon << std::endl;

    }
    void printRounds(){

        std::cout << "Current Round: " << currentRound << std::endl;
        std::cout << "Rounds Remaining: " << roundsRemaining << std::endl;
        std::cout << "Announcer: We are almost there team, bring this back home! "  << std::endl;

    }

    void playerStreak()
    {   
        
        std::cout << "Player's Kill Streak: " << streak << std::endl;
        std::cout << "Announcer: 5 more kills and you get the nuclear, dont blow this! "  << std::endl;
        
    }
};
