#include <iostream>
#include <vector>
#include <string>

int main(){

    std::string input = "turpentine and turtles";
    std::vector<char> vowels{"a", "e","i","o","u"};
    std::vector<char> result;

    for (int i = 0; i < input.size(); i++){
        for (int k = 0; i < vowels.size(); k++){
            if (input[i] == vowels[k]){
                result.push_back(input[i]);
                if (input[i] == 'e' || input[i] == 'u'){
                    result.push_back(input[i]);
                }
            }
        }
    }

    for (int m = 0; m < result.size(); m++){
        std::cout << result[m];
    }
    std::cout << "\n";



}