#include <iostream>
//Code is very repetitive! Refactor after OO Module

int main(){

    int gryffindor = 0;
    int slytherin  = 0;
    int ravenclaw  = 0;
    int hufflepuff = 0;

    int answer1, answer2, answer3, answer4, answer5;

    std::cout << "A thousand years or more ago, \n";
    std::cout << "When I was newly sewn, \n";
    std::cout << "There lived four wizards of renown, \n";
    std::cout << "Whose names are still well-known...\n";

    std::cout << "Welcome to the Sorting Hat Quiz!\n";

    //Question 1
    std::cout << "QUESTION 1: When I die, I want people to remember me as: \n";
    std::cout << " 1. The Good \n";
    std::cout << " 2. The Great \n";
    std::cout << " 3. The Wise \n";
    std::cout << " 4. The Bold \n";
    std::cin >> answer1;

    switch(answer1){
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            std::cout << "Your input is invalid!";
            break;
    }

    //Question 2
    std::cout << "QUESTION 2: Do you prefer Dawn or Dusk?\n";
    std::cout << " 1. Dawn \n";
    std::cout << " 2. Dusk \n";
    std::cin >> answer2;

    if (answer2 == 1){
        gryffindor++;
        ravenclaw++;
    }
    else if (answer2 == 2){
        slytherin++;
        hufflepuff++;
    }
    else {
        std::cout << "Your input is invalid!";
    }

    //Question 3
    std::cout << "QUESTION 3: What is your favorite instrument? \n";
    std::cout << " 1. The violin \n";
    std::cout << " 2. The trumpet \n";
    std::cout << " 3. The piano \n";
    std::cout << " 4. The drums \n";
    std::cin >> answer3;

    switch(answer3){
        case 1:
            slytherin++;
            break;
        case 2:
            hufflepuff++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            std::cout << "Your input is invalid!";
            break;
    }

    //Question 4
    std::cout << "QUESTION 4: Which road temps you the most? \n";
    std::cout << " 1. The wide, sunny grassy lane \n";
    std::cout << " 2. The narrow, dark, latern-lit alley \n";
    std::cout << " 3. The twisting, leaf-strewn path through woods \n";
    std::cout << " 4. The cobbled street lined with ancient buildings \n";
    std::cin >> answer4;

    switch(answer4){
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            gryffindor++;
            break;
        case 4:
            ravenclaw++;
            break;
        default:
            std::cout << "Your input is invalid!";
            break;
    }

    //Question 5
    std::cout << "QUESTION 5: What is your favorite animal? \n";
    std::cout << " 1. Hamster \n";
    std::cout << " 2. Cat \n";
    std::cout << " 3. Owl \n";
    std::cout << " 4. Dog \n";
    std::cin >> answer5;

    switch(answer4){
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            gryffindor++;
            break;
        case 4:
            ravenclaw++;
            break;
        default:
            std::cout << "Your input is invalid!";
            break;
    }

    // Now add up the points for each house and see which one won!
    std::string house;
    int max = 0;

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }

    std::cout << house << "!\n";

}