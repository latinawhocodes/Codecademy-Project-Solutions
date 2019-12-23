#include <iostream>
#include <vector>

//Challenge 1
void introduction(std::string first_name, std::string last_name){
    std::cout << last_name << ", " << first_name << " " << last_name;
}
    //output: Bond, James Bond

//Challenge 2
double average(double num1, double num2){
    return (num1 + num2)/2;
}
    //output: 33

//Challenge 3
int tenthPower(int num){
    return pow(num, 10);
}
    //output: 1024

//Challenge 4
std::vector<int> firstThreeMultiples(int num){
    std::vector<int> multiples{num, num * 2, num * 3};
    return multiples;
}
    //output: 8, 16, 24


//Challenge 5
std::string needsWater(int days, bool isSucculent){
    if (isSucculent == false && days > 3){
        return "Time to water the plant.";
    } else if (isSucculent == true && days <= 12){
        return "Don't water the plant!";
    } else if (isSucculent == true && days >= 13){
        return "Go ahead and give the plant a little water.";
    } else {
        return "Don't water the plant!";
    }
}
    //output: Time to water the plant.


//Challenge 6
bool isPalindrome(std::string text){

    std::string reversedText = "";

    for (int i = text.size() - 1; i >= 0; i--){
        reversedText += text[i];
    }

    if (reversedText == text){
        return true;
    }
    return false;
}
    //output: true, true, false


int main(){

    //Challenge 1
    introduction("James", "Bond");

    //Challenge 2
    average(42.0, 24.0);

    //Challenge 3
    tenthPower(2);

    //Challenge 4
    for (int element : firstThreeMultiples(8)){
        std::cout << element << "\n";
    }

    //Challenge 5
    std::cout << needsWater(10, false) << "\n";

    //Challenge 6
    std::cout << isPalindrome("madam") << "\n";
    std::cout << isPalindrome("ada") << "\n";
    std::cout << isPalindrome("lovelace") << "\n";
}
