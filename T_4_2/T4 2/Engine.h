#pragma once
#include <string>
#include <iostream>

class Engine {
private:
    int horsepower;
    std::string type;

public:
    Engine(int hp, std::string t);
    void display() const;
};