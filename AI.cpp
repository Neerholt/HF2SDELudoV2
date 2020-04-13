//
// Created by Victo on 13-04-2020.
//

#include "AI.h"
#include <iostream>


bool AI::AIOn() {
    std::cout << "AI has been enable."<< std::endl;
    ai = true;
    return ai;
}

bool AI::AIOff() {
    std::cout << "AI has been disabled."<< std::endl;
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
