#pragma once
#include <iostream>

class Engine {
private:
    int horsepower;
    std::string type;

public:
    Engine(int hp, std::string t) : horsepower(hp), type(t) {}

    void start() const {
        std::cout << "Engine started: " << type << " with " << horsepower << " HP.\n";
    }
};