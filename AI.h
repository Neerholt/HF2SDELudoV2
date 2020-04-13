//
// Created by Victor Neerholt, student at SDE Odense on 13-04-2020.
//

#ifndef LUDOV2_AI_H
#define LUDOV2_AI_H

#include <iostream>
#include <string>

class AI {
private:
    char userAnswer;
    //bool ai = false;
public:
    int aiDiceRoll;
    bool ai = false;
    void enableAI();
    bool AIOn();// Functions to keep my code DRY
    bool AIOff();// Functions to keep my code DRY
    void AIBot(int);
};


#endif //LUDOV2_AI_H
