#include <iostream>
#include <cstdlib>

int main(){

    std::cout << "MAGIC 8-BALL: \n";
    srand(time(NULL));
        //Sets the "seed" of the random number generator
    int answer = std::rand() % 20;
    //outputs a random number from 0-19

    std::cout << answer << " \n";


    switch(answer){
        case 0:
            std::cout << "It is certain.";
            break;
        case 1:
            std::cout << "It is decidedly so.";
            break;
        case 2:
            std::cout << "Without a doubt.";
            break;
        case 3:
            std::cout << "Yes - definitely.";
            break;
        case 4:
            std::cout << "You may rely on it,";
            break;
        case 5:
            std::cout << "As I see it, yes.";
            break;
        case 6:
            std::cout << "Most likely.";
            break;
        case 7:
            std::cout << "Outlook good.";
            break;
        case 8:
            std::cout << "Yes.";
            break;
        case 9:
            std::cout << "Signs point to yes.";
            break;
        case 10:
            std::cout << "Reply hazy, try again.";
            break;
        case 11:
            std::cout << "Ask again later.";
            break;
        case 12:
            std::cout << "Better not tell you now.";
            break;
        case 13:
            std::cout << "Cannot predict now.";
            break;
        case 14:
            std::cout << "Concentrate and ask again.";
            break;
        case 15:
            std::cout << "Don't count on it.";
            break;
        case 16:
            std::cout << "My reply is no.";
            break;
        case 17:
            std::cout << "My sources say no.";
            break;
        case 18:
            std::cout << "Outlook not so good.";
            break;
        case 19:
            std::cout << "Very doubtful.";
            break;
    }




}