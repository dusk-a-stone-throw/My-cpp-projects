#pragma once
#include <iostream>
#include <string>
class Character {
private:
    double HP;
    std::string name;
public:
    double GetHP() {
        return HP;
    }
    std::string GetName() {
        return name;
    }
    void SetHP(double HP) {
        this->HP = HP;
    }
    void SetName(std::string name) {
        this->name = name;
    }
    virtual void Shoot() = 0; // Только для оружия
    virtual void Use() = 0; // Для предметов

};
