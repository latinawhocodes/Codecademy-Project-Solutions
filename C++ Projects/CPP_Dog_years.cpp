#include <iostream>

int main(){

    int dogAge;
    int dogYears;

    std::cout << "Input your dog's age: ";
    std::cin >> dogAge;

    if (dogAge <= 2){
        dogYears = 10.5 * dogAge;
        std::cout << "Your dog is " << dogYears << " years old.";
    }
    else {
        dogYears = ((dogAge - 2) * 4) + 21;
        std::cout << "Your dog is " << dogYears << " years old.";
    }
}