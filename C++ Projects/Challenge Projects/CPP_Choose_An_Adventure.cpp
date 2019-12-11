#include <iostream>
#include <string>


int main(){

    int choice1, choice2, choice3;


    std::cout << "Welcome to Choices.";

    std::cout << "You are walking alone in New York City in the burough of Manhattan and you see a cat cross your path. He looks well-fed and has a collar on. You: \n";
        std::cout << "1. Try to pet him since he seems friendly \n";
        std::cout << "2. Attempt to follow him in case he is lost \n";
        std::cout << "3. Go on your way and forget about him \n";
    std::cin >> choice1;

    std::cout << "You chose: " << choice1;
    switch(choice1){
        case 1:
            std::cout << "You take a few steps to pet him but he is skittish and hisses at you...You try again and he bites you and runs away. \n";
            std::cout << "Now you have a bleeding cat bite on your hand...so much for your efforts to be nice. You: \n";
                std::cout << "1. Curse the cat and walk to the nearest gas station to buy band-aids to cover/disinfect it it.\n";
                std::cout << "2. Rinse it out in the nearest bathroom";
                std::cout << "3. Call your doctor and make an appointment to get a rabies shot just in case.\n";
            std::cin >> choice2;

            std::cout << "You chose: " << choice2 << "\n";
                if (choice2 == 1){
                    std::cout << "You walk to the gas station and buy the necessary things. It's overpriced and you end up splitting the purchase between your card and cash.\n";
                }
                else if (choice2 == 2){
                    std::cout << "You try to find the nearest place with a public bathroom and end up settling on a McDonalds. While rinsing your hands, you get too close to the sink and end up with a wet mark on your shirt. \n";
                }
                else if (choice2 == 3){
                    std::cout << "You can't get through to your doctor now so you create a reminder to call him tomorrow morning and google the possible signs of rabies.\n";
                }
                else {
                    std::cout << "Your choice is not valid!";
                }
            break;
        case 2:
            std::cout << "You turn quickly try to follow the cat for awhile, but he's too fast for you and disappears between the buildings and cars. You were so distracted looking at the cat that you're lost. ";
                std::cout << "1. Try to find your way...walking back the direction you think you came.\n";
                std::cout << "2. Call an Uber to pick you up and take you back to your hotel.\n";
                std::cout << "3. Ask a random person for directions to the nearest subway station. You know where your hotel is...kind of...\n";
            std::cin >> choice2;

            std::cout << "You chose: " << choice2 << "\n";
                if (choice2 == 1){
                    std::cout << "You walk for about 30 minutes but when you pass the Manhattan Mall you realize you passed your hotel!";
                }
                else if (choice2 == 2){
                    std::cout << "You call the Uber and you see a car coming your way...You wait for what seems like an hour before he arrives. You have him drop you at a coffee shop next to your hotel because he seems really shady.\n";
                }
                else if (choice2 == 3){
                    std::cout << "A group of teens give you directions to Lexington Avenue but you're not sure once you start walking. You can kind of see the hotel from where you are when you follow their directions and you stop to get a bagel and coffee.\n";
                }
                else {
                    "Your choice is not valid!";
                }
            break;
        case 3:
            std::cout << "You keep walking and ignore the cat. Your phone rings and you hurry to reach it in case one of your friends is calling about tonight. ";
                std::cout << "1. ";
                std::cout << "2. ";
                std::cout << "3. ";
            std::cin >> choice3;

            std::cout << "You chose: " << choice3 << "\n";

            break;
        default:
            std::cout << "Your input is invalid!";
            break;
    }

    std::cout << "Your night is ruined, and you decide to go back to your hotel since you didn't have much money in the first place and after everything, you're just done with tonight. You text your friends an apology and walk back to your hotel.\n";
        std::cout << "";

}