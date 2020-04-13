//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#include "Pawn.h"
#include <iostream>

void Pawn::displayPlayerPosition(int playerID, int diceRoller) {
    if(diceRoller == 6){
        playerBoardPosition.push_back(diceRoller);
        playerBoardPosition.push_back(playerID);
        std::cout << "You got a " << diceRoller << " and a pawn has been added to the field " << std::endl;
    } else {
        playerBoardPosition.push_back(diceRoller);
        playerBoardPosition.push_back(playerID);
        std::cout <<"You rolled a " << diceRoller  <<  " and you have 0 pawns on the field " << std::endl;
    }

}


void Pawn::pawnDataDevTool() {
    std::cout << " Vector Size " << "[" << playerBoardPosition.size() << "]"<< " Dice Roll Value " << "[" << playerBoardPosition.front()<< "]"  << " Player ID " << "[" << playerBoardPosition.back() <<"]" <<std::endl;
}

void Pawn::printVector() {
    auto pos = playerBoardPosition.begin();
    std::cout<<"Print vector ";
    while(pos != playerBoardPosition.end()){
        std::cout << *pos++ << " ";
    }
}

