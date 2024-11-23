#pragma once

typedef struct Temperatura {
    float valoare;
    char unitatemasura; // 'C' pentru Celsius, 'F' pentru Fahrenheit
} Temperatura;

void convertTemperatura(Temperatura* temp);
