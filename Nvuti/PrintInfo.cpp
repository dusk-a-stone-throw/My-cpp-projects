#include <iostream>
void PrintInfo(double balance, double bet, double winPercentage, double possibleGain) {
    std::cout << "#######################" << std::endl;
    std::cout << "BALANCE: " << balance << std::endl;
    std::cout << "Win percantage: " << winPercentage << std::endl;
    std::cout << "Your bet: " << bet << "You can gain: " << possibleGain << std::endl;
}
