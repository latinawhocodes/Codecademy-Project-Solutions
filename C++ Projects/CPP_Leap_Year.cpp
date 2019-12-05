#include <iostream>
//using namespace std;

int main(){

    int year;

    std::cout << "Please enter the year: ";
    std::cin >> year;

    if (year >= 1000){
        std::cout << year;
    }
    else {
        std::cout << "\nInvalid!";
    }

    if (year % 100 == 0 && year % 400 == 0){
        std::cout << "\nLeap Year";
    }
    else if (year % 400 == 0){
        std::cout << "\nLeap Year";
    }
    else if (year % 100 == 0 && year % 400 != 0){
        std::cout << "\nNot a Leap Year!";
    }
    else if (year % 4 == 0){
        std::cout << "\nLeap Year";
    }
    else {
        std::cout << "\nNot a Leap Year!";
    }
}