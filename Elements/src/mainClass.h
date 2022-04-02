#pragma once
#include <string>
#include <vector>
#include <iostream>
class Element {
private:
    std::string name;
    std::string latinName;
    std::string symbol;
    int number;
    double mass;
public:
    Element(int number, std::string name, std::string symbol, std::string latinName, double mass);
    Element(int number);
    void PrintElem();
    std::string GetSymbol();
    std::string GetName();
    std::string GetLatin();
    double GetMass();
};
// Создаем объекты элементов
    
