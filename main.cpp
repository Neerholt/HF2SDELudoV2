//standard c++ class library.
#include <iostream>
#include <string>

//My own class library.
#include "playerData.h"
#include "Dice.h"
#include "Pawn.h"
#include "AI.h"

int main() {

    int k = 0;
    char userInput;

    //Instantiate a object
    PlayerData playerDataClassObject;
    Dice diceClassObject;
    Pawn pawnClassObject;
    AI aiClassObject;


    //Ask the player about the amount of players/what there name is.
    playerDataClassObject.playerAmountValue();//PlayerData Class.
    playerDataClassObject.selectPlayerName();//PlayerData Class.
    if(playerDataClassObject.playerAmount == 1){
        std::cout << "AI has been enabled automatically by the game! "<<std::endl;
        aiClassObject.ai = true;
    } else if (playerDataClassObject.playerAmount == 4){
        std::cout << "AI has been disabled automatically by the game! "<<std::endl;
        aiClassObject.ai = false;
    } else{
        aiClassObject.enableAI();//Ask the user if they would like to enable AI.
    }

   std::cout << "[" <<aiClassObject.ai<< "]" << std::endl;//Developer tool to tell if AI is true = 1 of false = 1?

    //Main Game Loop
    diceClassObject.resetDice();//Reset the dice
    while(k != 100){//When live version roll out this has to be of type Bool!
        std::cin.ignore();//ignore the ENTER after the user ENTERS the last username. DON'T MOVE ME!!
        std::cout << "Press the ENTER key to roll the dice "<</*Get data from the pawn class like if he can move a pawn or not or say you roll and you have 0 pawns on the files and you need to roll a 6 to get a pawn on the filed*/ playerDataClassObject.displayPlayerNames(k)<< " . " << k <<std::endl;
        if (std::cin.get() == '\n'){
            diceClassObject.diceRoll();//Dice class
            std::cout<< playerDataClassObject.displayPlayerNames(k)<< " you have " /*Use a game object from board or pawn */ "0 pawns on the field\n";
            pawnClassObject.displayPlayerPosition();
            std::cout<<"\n Press ENTER to end your turn "<< playerDataClassObject.displayPlayerNames(k) << ". " <<std::endl;
        } else{
            std::cout << "I meant ONLY the ENTER key... Oh well.\n";
            continue;
        }

        k++;

        if(k == playerDataClassObject.playerAmount){
            k = 0;
        }
    }

    return 0;
}
