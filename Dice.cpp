//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#include <iostream>
#include <ctime>
#include "Dice.h"

int Dice::diceRoll() {
    ran = rand()%6+1;
    if(ran == 6){
        std::cout << "You rolled a " << ran << ", you can move a pawn out on the field "<< std::endl;
    } else{
        std::cout << "You rolled a " << ran << ", your pawn will move " << ran << std::endl;
    }
    return ran;
}

int Dice::totalDiceValue(int dice1, int dice2) {
    std::cout << "Your total so far is: " << dice1 + dice2 << std::endl;
    return dice2 + dice2;
}

void Dice::resetDice() {
    srand(time(NULL));
}