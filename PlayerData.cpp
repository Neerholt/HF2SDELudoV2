//
// Created by Victo on 12-04-2020.
//

#include "PlayerData.h"
#include <iostream>

void PlayerData::playerAmountValue() {
    std::cout << "Enter player amount [MAX 4: MIN 2]: ";
    std::cin>>playerAmount;
    while(std::cin.fail()) {
        std::cout <<"Error: Enter an integer number!"<<std::endl;
        std::cout << "Enter player amount [MAX 4: MIN 2]: ";
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> playerAmount;
    }
}

void PlayerData::selectPlayerName(){
    while(i != playerAmount){
        std::cout << "Enter your username player"<< i << " :";
        std::cin >> name;
        playerNameList.push_back(name);
        i++;
    }
}

std::string PlayerData::displayPlayerNames(int l) {
        return playerNameList[l];
}