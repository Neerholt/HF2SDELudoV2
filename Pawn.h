//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#ifndef LUDOV2_PAWN_H
#define LUDOV2_PAWN_H

#include <iostream>
#include <vector>


class Pawn {
private:
    std::vector<int> playerBoardPosition;
public:
    void displayPlayerPosition(int ,int);//Take two parameter first is the player id in the vector, and the second parameter is the dice roll
    int pawnDecision();
    void getBoardInformation();
    void pawnDataDevTool();
    void printVector();
};


#endif //LUDOV2_PAWN_H
