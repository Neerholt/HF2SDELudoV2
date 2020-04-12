//standard c++ class library.
#include <iostream>
#include <string>

//My own class library.
#include "playerData.h"
#include "Dice.h"

int main() {

    int k = 0;
    char userInput;

    //Instantiate a object
    PlayerData playerDataClassObject;
    Dice diceClassObject;

    //Ask the player about the amount of players/what there name is.
    playerDataClassObject.playerAmountValue();//PlayerData Class.
    playerDataClassObject.selectPlayerName();//PlayerData Class.

    //Main Game Loop
    diceClassObject.resetDice();//Reset the dice
    while(k != 100){//When live version this has to be of type Bool!
        std::cin.ignore();//ignore the ENTER after the user ENTERS the last username. DON'T MOVE ME!!
        std::cout << "Press the ENTER key to roll the dice "<</*Get data from the pawn class like if he can move a pawn or not or say you roll and you have 0 pawns on the files and you need to roll a 6 to get a pawn on the filed*/ playerDataClassObject.displayPlayerNames(k)<< "."<<std::endl;
        if (std::cin.get() == '\n'){
            diceClassObject.diceRoll();//Dice class
            std::cout<< playerDataClassObject.displayPlayerNames(k)<< " you have 0 pawns on the field\n";
            std::cout<<"Pawn 1: Position = 0"<<std::endl;
            std::cout<<"Pawn 2: Position = 0"<<std::endl;
            std::cout<<"Pawn 3: Position = 0"<<std::endl;
            std::cout<<"Pawn 4: Position = 0"<<std::endl;
            std::cout<<"\n Press ENTER to end your turn "<< playerDataClassObject.displayPlayerNames(k) << "." <<std::endl;
        } else{
            std::cout << "I meant ONLY the ENTER key... Oh well.\n";
            continue;
        }
        k++;
    }

    return 0;
}
