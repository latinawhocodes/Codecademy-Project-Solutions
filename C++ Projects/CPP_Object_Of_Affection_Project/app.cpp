#include <iostream>
#include "profile.hpp"


int main(){

    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

    std::cout << sam.view_profile();

}
