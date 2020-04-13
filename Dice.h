//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#ifndef LUDOV2_DICE_H
#define LUDOV2_DICE_H


class Dice {
private:

public:
    int diceRollNumberLive;
    int ran;
    void resetDice();
    int diceRoll(void); //The following function simulates a dice roll
    int results(int);
};


#endif //LUDOV2_DICE_H
