//standard c++ class library.
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

//My own class library.
#include "playerData.h"
#include "Dice.h"
#include "Pawn.h"
#include "AI.h"

int main() {

    int q = 1;//Round counter
    int k = 0;//Player While loop vector loop player
    int p = 0;//AI While loop vector loop player

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


    //Main Game Loop
    diceClassObject.resetDice();//Reset the dice
    while(k != 100){//When live version roll out this has to be of type Bool!
        std::cin.ignore();//ignore the ENTER after the user ENTERS the last username. DON'T MOVE ME!!
        std::cout << "Press the ENTER key to roll the dice "<</*Get data from the pawn class like if he can move a pawn or not or say you roll and you have 0 pawns on the files and you need to roll a 6 to get a pawn on the filed*/ playerDataClassObject.displayPlayerNames(k)<< "."<<std::endl;
        if (std::cin.get() == '\n'){
            std::cout<< playerDataClassObject.displayPlayerNames(k) << " ";
            diceClassObject.diceRoll();//Dice class
            pawnClassObject.displayPlayerPosition(k, diceClassObject.ran);//playerDataClassObject.displayPlayerNames(k) would be the best solution but it's string and a long story.
            /*Dev Tool*/
            std::cout <<  "AI Status " << "[" <<aiClassObject.ai<< "] ";//Developer tool to tell if AI is true = 1 of false = 1?
            std::cout <<  "Round " << "[" << q << "] ";
            pawnClassObject.pawnDataDevTool();
            pawnClassObject.printVector();
            /*Dev Tool*/
            std::cout<<"\n Press ENTER to end your turn "<< playerDataClassObject.displayPlayerNames(k) << ". " <<std::endl;
        } else{
            std::cout << "I meant ONLY the ENTER key... Oh well.\n";
            continue;
        }
        k++;
        q++;

        //AI Part!
        /*
        if(aiClassObject.ai == true){
            while(p != playerDataClassObject.playerAmount){
                std::cout<<"AI Bot "<< p;
                aiClassObject.AIBot(diceClassObject.diceRoll());
                std::cout<< aiClassObject.aiDiceRoll;
                pawnClassObject.displayPlayerPosition();
                std::this_thread::sleep_for(std::chrono::milliseconds(5000));
                p++;
                break;
            }
        } else{
            std::cout<< "NO AI"<<std::endl;
        }
         */

        //Reset k so it does not end up going out of scope for my vector!
        if(k == playerDataClassObject.playerAmount){
            k = 0;
        }
    }

    return 0;
}
