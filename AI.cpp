//
// Created by Victor Neerholt, student at SDE Odense on 13-04-2020.
//

#include "AI.h"
#include <iostream>
#include <thread>


bool AI::AIOn() {
    std::cout << "AI has been enable "<< std::endl;
    ai = true;
    return ai;
}

bool AI::AIOff() {
    std::cout << "AI has been disabled " << std::endl;
    ai = false;
    return ai;
}


void AI::enableAI() {
    std::cout << "Do you wish to enable a AI player? [y/n]:";
    std::cin >> userAnswer;
    switch (userAnswer){
        case 'y':
            AIOn();
            break;
        case 'Y':
            AIOn();
            break;
        case 'n':
            AIOff();
            break;
        case 'N':
            AIOff();
            break;
        default:
            std::cout<<"Error :)"<< __LINE__ <<std::endl;// __LINE__ Displays what line the error is on
            break;
    }
}

void AI::AIBot(int dice) {
    aiDiceRoll = dice;
    return; aiDiceRoll;
}


//Need some more work!
void AI::displayBot(int playerDataClass, int diceLiveRoller, int pawnClass) {
    int p = 0;
    if(ai == true){
        while(p != playerDataClass){
            std::cout<<"AI Bot "<< p;
            AIBot(diceLiveRoller);
            std::cout<< diceLiveRoller;
            std::cout<< pawnClass;
            std::this_thread::sleep_for(std::chrono::milliseconds(5000));
            p++;
            break;
        }
    } else{
        std::cout<< "I is disabled "<<std::endl;
    }
}