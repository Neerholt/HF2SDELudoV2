//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#include <iostream>
#include <ctime>
#include "Dice.h"

int Dice::diceRoll() {
    ran = rand()%6+1;
    std::cout << "You rolled a " << ran << std::endl;
    return ran;
}

/*
int Dice::results(int liveDiceResults) {
    diceRollNumberLive = liveDiceResults;
    return diceRollNumberLive;
}
 */


void Dice::resetDice() {
    srand(time(NULL));
}