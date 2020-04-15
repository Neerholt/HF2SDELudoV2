//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#include "Pawn.h"
#include <iostream>

void Pawn::displayPlayerPosition(int playerID, int diceRoller , int playerLiveAmount) {
    if(diceRoller == 6){
        std::cout<< "Which pawn do you want to move out [1,2,3,4]? " <<std::endl;
        std::cin >> whichPawn;
        bool addMoreVectors = true;
        int s = 1;
        onBoardPawn.resize(s, std::vector<int>(s,playerID));

            do {
                if(onBoardPawn[NULL][playerID] == playerID){
                    std::cout << "onBoardPawn's first vector value aka player id is " << onBoardPawn[NULL][playerID]<< std::endl;
                    std::cout << "onBoardPawn's total amount of vectors in the main vector onPawnBoard"<<  onBoardPawn.size()<<std::endl;

                    switch (whichPawn){
                        case 1:
                            //onBoardPawn[NULL][playerID];
                            std::cout << "Pawn 1 has been added to your board" << std::endl;
                            break;
                        case 2:
                            std::cout << "Pawn 2 has been added to your board" << std::endl;
                            break;
                        case 3:
                            std::cout << "Pawn 3 has been added to your board" << std::endl;
                            break;
                        case 4:
                            std::cout << "Pawn 4 has been added to your board" << std::endl;
                            break;
                        default:
                            std::cout<<"Error on line " << __LINE__ <<std::endl;
                            break;
                    }
                } else{
                    onBoardPawn.resize(s, std::vector<int>(1,playerID));
                }
                s++;

                if(onBoardPawn.size() == playerLiveAmount){
                    addMoreVectors = false;
                }

                if(s == playerLiveAmount){
                    s = 0;
                }


            } while (addMoreVectors != false);

    } else{
        std::cout << "You don't have any pawns on the board to move." << std::endl;
    }
}

/*

void Pawn::getBoardInformation() {
        if(onBoardPawn.empty()){
            std::cout << "You don't have any pawns on the board to move, better luck next time." << std::endl;
        } else{
            auto pos = onBoardPawn.begin();
            std::cout<< "You have " << onBoardPawn.size() << " pawn on the board!" << std::endl;
            int  b = 0;
            while(b != onBoardPawn.size()){
                std::cout<< "Pawn "<< onBoardPawn.data() <<  " position is " << onBoardPawn[b]<< " on the board" << std::endl;
                b++;
            }
        }
    }


void Pawn::pawnDataDevTool() {
    if(playerBoardPosition.empty()){
        //std::cout<< "There are no developer data to return!" << std::endl;
    } else{
        std::cout << " Vector Size " << "[" << playerBoardPosition.size() << "]"<< " Dice Roll Value " << "[" << playerBoardPosition.front()<< "]"  << " Player ID " << "[" << playerBoardPosition.back() <<"]" <<std::endl;
    }
}

void Pawn::printVector() {
    if(playerBoardPosition.empty()){
        //Nothing
    } else{
        auto pos = playerBoardPosition.begin();
        std::cout<<"Print vector ";
        while(pos != playerBoardPosition.end()){
            std::cout << *pos++ << " ";
        }
    }
}

*/