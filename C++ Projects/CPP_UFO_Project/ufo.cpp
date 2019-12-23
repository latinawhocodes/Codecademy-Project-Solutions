#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {

    greet();

    std::string codeword = "codecademy";
    std::string answer = "_ _ _ _ _ _ _ _ _ _";
    int misses = 0;

    std::vector<char> incorrect;
    bool guess = false;

    char letter;

    while (answer != codeword && misses <= 7){
        display_misses(misses);

        display_status(incorrect, answer);

        std::cout << "\n\nPlease enter your guess: \n";
        std::cin >> letter;

        for (int i = 0; i < codeword.length(); i++){
            if (letter == codeword[i]){
                guess = true;
            }
        }

        if (guess){
            std::cout << "Correct!\n";
        }
        else {
            std::cout << "Incorrect! The tractor beam pulls the person in further.\n";

            incorrect.push_back(letter);

            misses++;
        }

        guess = false;
        //resets guess to false so it can only be true again if the person guesses another correct letter

    }

    end_game(answer, codeword);
}
