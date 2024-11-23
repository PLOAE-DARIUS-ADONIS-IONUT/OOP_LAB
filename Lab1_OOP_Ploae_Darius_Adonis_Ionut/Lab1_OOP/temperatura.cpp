#include "temperatura.h"
#include <iostream>

void convertTemperatura(Temperatura* temp) {
    if (temp->unitatemasura == 'C') {
        temp->valoare = (temp->valoare * 9.0 / 5.0) + 32; // C>F = (C*9/5) + 32
        temp->unitatemasura = 'F';
    }
    else if (temp->unitatemasura == 'F') {
        temp->valoare = (temp->valoare - 32) * 5.0 / 9.0; // F>C = (F-32)*5/9
        temp->unitatemasura = 'C';
    }
}
