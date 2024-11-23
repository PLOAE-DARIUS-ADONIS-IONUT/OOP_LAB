#include "Rectangle.h"

int main()
{
    // Crearea a doua obiecte de tip Rectangle
    Rectangle rect1(10, 5);
    Rectangle rect2(7, 6);

    // Afisarea perimetrului si ariei primului dreptunghi
    cout << "Dreptunghiul 1: Perimetru = " << rect1.calculatePerimeter()
        << ", Arie = " << rect1.calculateArea() << endl;

    // Afisarea perimetrului si ariei celui de-al doilea dreptunghi
    cout << "Dreptunghiul 2: Perimetru = " << rect2.calculatePerimeter()
        << ", Arie = " << rect2.calculateArea() << endl;

    // Compararea perimetrelor
    rect1.compareWithOtherPerimeter(rect2);

    // Compararea ariilor
    rect1.compareWithOtherArea(rect2);

    return 0;
}
