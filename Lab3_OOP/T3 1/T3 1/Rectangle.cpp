#include "Rectangle.h"

// Constructor
Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

// Functie pentru calcularea perimetrului
double Rectangle::calculatePerimeter() const
{
    return 2 * (length + width);
}

// Functie pentru calcularea ariei
double Rectangle::calculateArea() const
{
    return length * width;
}

// Functie pentru compararea perimetrelor
void Rectangle::compareWithOtherPerimeter(const Rectangle& other) const
{
    double currentPerimeter = calculatePerimeter();
    double otherPerimeter = other.calculatePerimeter();

    if (currentPerimeter > otherPerimeter)
    {
        cout << "Dreptunghiul curent are un perimetru mai mare." << endl;
    }
    else if (currentPerimeter < otherPerimeter)
    {
        cout << "Celalalt dreptunghi are un perimetru mai mare." << endl;
    }
    else
    {
        cout << "Ambele dreptunghiuri au acelasi perimetru." << endl;
    }
}

// Functie pentru compararea ariilor
void Rectangle::compareWithOtherArea(const Rectangle& other) const
{
    double currentArea = calculateArea();
    double otherArea = other.calculateArea();

    if (currentArea > otherArea)
    {
        cout << "Dreptunghiul curent are o arie mai mare." << endl;
    }
    else if (currentArea < otherArea)
    {
        cout << "Celalalt dreptunghi are o arie mai mare." << endl;
    }
    else
    {
        cout << "Ambele dreptunghiuri au aceeasi arie." << endl;
    }
}
