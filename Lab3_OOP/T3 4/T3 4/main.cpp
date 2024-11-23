#include <iostream>
#include <cmath> 
using namespace std;

// Definim o clasa pentru a reprezenta o ecuatie de gradul 2
class EcuatieDeGradulDoi
{
private:
    double coefA, coefB, coefC; // Coeficientii ecuatiei de gradul 2

public:
    // Constructor pentru a initializa coeficientii prin atribuirea directa
    EcuatieDeGradulDoi(double coeficientA, double coeficientB, double coeficientC)
    {
        coefA = coeficientA;
        coefB = coeficientB;
        coefC = coeficientC;
    }

    // Functie pentru a calcula discriminantul
    double calculeazaDiscriminant()
    {
        return coefB * coefB - 4 * coefA * coefC; // Formula discriminantului: Delta = b^2 - 4ac
    }

    // Functie pentru a rezolva ecuatia de gradul 2
    void rezolvaEcuatia()
    {
        if (coefA == 0)
        {
            cout << "Aceasta nu este o ecuatie de gradul 2 (a nu poate fi zero)." << endl;
            return;
        }

        double D = calculeazaDiscriminant(); // Calculam discriminantul

        if (D > 0)
        {
            // Doua radacini reale distincte
            double x1 = (-coefB + sqrt(D)) / (2 * coefA);
            double x2 = (-coefB - sqrt(D)) / (2 * coefA);
            cout << "Doua radacini reale distincte: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else if (D == 0)
        {
            // O radacina reala repetata
            double x = -coefB / (2 * coefA);
            cout << "O radacina reala repetata: x = " << x << endl;
        }
        else
        {
            // Doua radacini complexe
            double parteaReală = -coefB / (2 * coefA);
            double parteaImaginara = sqrt(-D) / (2 * coefA);
            cout << "Doua radacini complexe: x1 = " << parteaReală << " + " << parteaImaginara << "i"
                << ", x2 = " << parteaReală << " - " << parteaImaginara << "i" << endl;
        }
    }
};

int main()
{
    // Cream o instanta a clasei EcuatieDeGradulDoi cu coeficientii a, b si c
    double coefA, coefB, coefC;
    cout << "Introduceti coeficientii a, b si c: ";
    cin >> coefA >> coefB >> coefC;

    // Instantiem clasa si rezolvam ecuatia
    EcuatieDeGradulDoi ecuatie(coefA, coefB, coefC);
    ecuatie.rezolvaEcuatia();

    return 0;
}
