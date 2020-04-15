//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#ifndef LUDOV2_PAWN_H
#define LUDOV2_PAWN_H

#include <iostream>
#include <vector>


class Pawn {
private:
    int whichPawn;
    int pawn1 = 14, pawn2 = 14, pawn3 = 14, pawn4 = 14;
    std::vector<int> playerBoardPosition;
    std::vector< std::vector<int> > onBoardPawn;
public:
    void displayPlayerPosition(int ,int, int);//Take two parameter first is the player id in the vector, and the second parameter is the dice roll
    void getBoardInformation();
    void pawnDataDevTool();
    void printVector();
};


#endif //LUDOV2_PAWN_H
