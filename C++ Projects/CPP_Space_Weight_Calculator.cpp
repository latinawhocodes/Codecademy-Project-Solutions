#include <iostream>


int main() {

  double earthWeight;
  double planetWeight;

  std::cout << "What is your earth weight?";
  std::cin >> earthWeight;

  std::cout << "What planet would you want to fight on? \n";
    std::cout << "1. Venus      \n";
    std::cout << "2. Mars       \n";
    std::cout << "3. Jupiter    \n";
    std::cout << "4. Saturn     \n";
    std::cout << "5. Uranus     \n";
    std::cout << "6. Neptune    \n";

    int planetChoice;
    std::cin >> planetChoice;

    double venusGravity, marsGravity, jupiterGravity, saturnGravity, uranusGravity, neptuneGravity;

    switch(planetChoice){
        case 1:
            venusGravity = 0.78;
            planetWeight = earthWeight * venusGravity;
            std::cout << "Your weight on the chosen planet is: " << planetWeight ;
            break;
        case 2:
            marsGravity = 0.39;
            planetWeight = earthWeight * marsGravity;
            std::cout << "Your weight on the chosen planet is: " << planetWeight ;
            break;
        case 3:
            jupiterGravity = 2.65;
            planetWeight = earthWeight * jupiterGravity ;
            std::cout << "Your weight on the chosen planet is: " << planetWeight ;
            break;
        case 4:
            saturnGravity = 1.17;
            planetWeight = earthWeight * saturnGravity;
            std::cout << "Your weight on the chosen planet is: " << planetWeight ;
            break;
        case 5:
            uranusGravity = 1.05;
            planetWeight = earthWeight * uranusGravity;
            std::cout << "Your weight on the chosen planet is: " << planetWeight ;
            break;
        case 6:
            neptuneGravity = 1.23;
            planetWeight = earthWeight * neptuneGravity;
            std::cout << "Your weight on the chosen planet is: " << planetWeight ;
            break;
        default:
            std::cout << "Sorry that is not a valid input!";
            break;
    }


}