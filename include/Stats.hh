#pragma once
#include <string>

class Entity
{

public:
    int X = 0 , Y = 0;
    int currentRound = 2;
    int roundsRemaining = 3;


    void onlinePlayers(int count)
    {

        std::cout <<"People online :" << count << std::endl;
    }
    void kd(int kill, int death)
    {

        X += kill;
        Y += death;

        std::cout << "Kills: " << X << "\n" <<"Deaths : " << Y << std::endl;
    }
};
