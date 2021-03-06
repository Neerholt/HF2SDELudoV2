//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#ifndef LUDOV2_PLAYERDATA_H
#define LUDOV2_PLAYERDATA_H
#include<vector>
#include <string>


class PlayerData {
private:
    //DataTypes.
    int i = 0;
    std::string name;
    std::vector<std::string> playerNameList;
    bool winner = false;
public:
    //Class Functions.
    int playerAmount;
    void playerAmountValue();
    void selectPlayerName();
    std::string displayPlayerAmount();
    std::string displayPlayerNames(int);
};


#endif //LUDOV2_PLAYERDATA_H



