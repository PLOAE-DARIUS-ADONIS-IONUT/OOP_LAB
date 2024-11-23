#pragma once

#include <iostream>
using namespace std;

// Definirea clasei Rectangle
class Rectangle
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w);

    // Functie pentru calcularea perimetrului
    double calculatePerimeter() const;

    // Functie pentru calcularea ariei
    double calculateArea() const;

    // Functie pentru compararea perimetrelor
    void compareWithOtherPerimeter(const Rectangle& other) const;

    // Functie pentru compararea ariilor
    void compareWithOtherArea(const Rectangle& other) const;
};
