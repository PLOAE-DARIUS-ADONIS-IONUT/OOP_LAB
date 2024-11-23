#include "Engine.h"

Engine::Engine(int hp, std::string t) : horsepower(hp), type(t) {}

void Engine::display() const {
    std::cout << "Engine: " << horsepower << " HP, Type: " << type << "\n";
}