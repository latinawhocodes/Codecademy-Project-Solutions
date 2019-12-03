#include <iostream>

int main(){

    double pesos, reais, soles;

    std::cout << "Enter number of Columbian Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    /* Conversion Rate on Dec 03 2019 --> XECurrency
    pesos: 3,508.95 COP to 1 USD
    reais: 4.22 BRL to 1 USD
    soles: 3.38 PEN to 1 USD
    */

    double dollars;
    double pesosRate = 3508.95;
    double reaisRate = 4.22;
    double solesRate = 3.38;

    dollars = (pesos/pesosRate) + (reais/reaisRate) + (soles/solesRate);

    std::cout << "You have $" << dollars << " dollars.";

}