//
// Created by Victor Neerholt, student at SDE Odense on 12-04-2020.
//

#ifndef LUDOV2_DICE_H
#define LUDOV2_DICE_H


class Dice {
private:
    int totalDiceNumber;
    int ran;
public:
    void resetDice();
    int diceRoll(void); //The following function simulates a dice roll
    int totalDiceValue(int, int);//Adds the 1st and 2nd roll together
    int results(int);
};


#endif //LUDOV2_DICE_H
