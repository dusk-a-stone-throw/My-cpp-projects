#include "mainClass.h"
#include <iostream>
Element::Element(int number, std::string name, std::string symbol, std::string latinName, double mass) {
    this->name      = name;
    this->latinName = latinName;
    this->symbol    = symbol;
    this->number    = number;
    this->mass      = mass;
}
Element::Element(int number) {
    this->number = number;
}
void Element::PrintElem() {
    std::cout << "Íîìåð ýëåìåíòà: " << number << std::endl;
    std::cout << "Èìÿ ýëåìåíòà: " << name << std::endl;
    std::cout << "Èìÿ ýëåìåíòà íà ëàòûíè: " << latinName << std::endl;
    std::cout << "Ñèìâîë ýëåìåíòà: " << symbol << std::endl;
    std::cout << "Màññà ýëåìåíòà: " << mass << std::endl;
    std::cout << "=======================" << std::endl;
}
std::string Element::GetSymbol() {
    return symbol;
}
std::string Element::GetName() {
    return name;
}
std::string Element::GetLatin() {
    return latinName;
}
double Element::GetMass() {
    return mass;
}
