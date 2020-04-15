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

//Need some more work!
void AI::displayBot(int playerDataClass, int diceLiveRoller, int pawnClass, int playerLiveAmount) {
    int p = 0;
    if(ai == true){
        while(p != playerDataClass){
            std::cout<<std::endl;//Just to add space
            std::cout<<"Waiting on AI";
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            std::cout<<std::endl;//Just to add space
            std::cout<<"AI Bot "<< p << " you rolled a ";
            std::cout<< diceLiveRoller << std::endl;

            if(p == playerLiveAmount){
                p = 0;
            }

           if(pawnClass == 0){
               std::cout<<"AI Bot " << p << " has no pawns on the board." << std::endl;
           }
            p++;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout<<"AI's turn has ended press ENTER to end AI's turn." << std::endl;
        }
    } else{
        //Nothing
    }
}