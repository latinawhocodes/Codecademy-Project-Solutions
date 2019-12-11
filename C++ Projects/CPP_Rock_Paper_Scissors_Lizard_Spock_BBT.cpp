#include <iostream>
#include <stdlib.h>
//lets you include the rand() function in your program


int main(){
    /* Inspired by the Big Bang Theory Episode
       This game will be more challenging that the predictable Rock Paper Scissors by adding two extra characters: Lizard and Spock
    */

    srand(time(NULL));

    int computer = rand()%5 + 1 ;
    //by doing rand()%3 + 1 we are dividing the random number by 3 and finding the remainder b/c we want to have 1, 2, or 3, we have to add + 1 to the remainder
    int user = 1 ;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "4) lizard\n";
    std::cout << "5) Spock\n";
    std::cout << "shoot! ";

    std::cin >> user;
    std::cout << "computer: " << computer << "\n\n";

    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int lizard = 4;
    int spock = 5;

      /*
        rock > scissors
        rock > lizard
        scissors > paper
        scissors > lizard
        paper > rock
        paper > spock
        spock > scissors
        spock > rock
        lizard > paper
        lizard > spock
     */

    if (user == rock){
        if (computer == scissors || computer == lizard){
            std::cout << "User Wins!";
        }
        else {
            std::cout << "Computer Wins!";
        }
    }
    else if (user == scissors){
        if (computer == paper || computer == lizard){
            std::cout << "User Wins!";
        }
        else {
            std::cout << "Computer Wins!";
        }
    }
    else if (user == paper){
        if (computer == rock || computer == spock){
            std::cout << "User Wins!";
        }
        else {
            std::cout << "Computer Wins!";
        }
    }
    else if (user == lizard){
        if (computer == paper || computer == spock){
            std::cout << "User Wins";
        }
        else {
            std::cout << "Computer Wins!";
        }
    }
    else if (user = spock){
        if (computer == scissors || computer == rock){
            std::cout << "User Wins!";
        }
        else {
            std::cout << "Computer Wins!";
        }
    }
    else {
        std::cout << "Invalid Input!";
    }



}