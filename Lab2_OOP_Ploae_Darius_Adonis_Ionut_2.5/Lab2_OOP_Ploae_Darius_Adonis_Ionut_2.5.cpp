#include <iostream>
#include <stdexcept>  

using namespace std;

// Functie pentru a efectua operatiunea de impartire pentru int-uri
int operatieInt(int a, int b, int (*op)(int, int)) {
    if (b == 0) {
        throw runtime_error("Impartire la zero nu este permisa!");
    }
    return op(a, b);
}

// Functie pentru a efectua operatiunea de impartire pentru double-uri
double operatieDouble(double a, double b, double (*op)(double, double)) {
    if (b == 0.0) {
        throw runtime_error("Impartire la zero nu este permisa!");
    }
    return op(a, b);
}

// Functie care efectueaza impartirea pentru int-uri
int impartireInt(int a, int b) {
    return a / b;
}

// Functie care efectueaza impartirea pentru double-uri
double impartireDouble(double a, double b) {
    return a / b;
}

int main() {
    try {
        // Exemplu pentru operatia cu int-uri
        int x1 = 10, y1 = 2;
        cout << "Rezultatul impartirii int-urilor: " << operatieInt(x1, y1, impartireInt) << endl;

        // Exemplu pentru operatia cu double-uri
        double x2 = 10.5, y2 = 2.5;
        cout << "Rezultatul impartirii double-urilor: " << operatieDouble(x2, y2, impartireDouble) << endl;

        // Exemplu pentru impartire la zero cu int-uri
        int x3 = 10, y3 = 0;
        cout << "Rezultatul impartirii int-urilor: " << operatieInt(x3, y3, impartireInt) << endl;

    }
    catch (const exception& e) {
        cout << "Eroare: " << e.what() << endl;
    }

    try {
        // Exemplu pentru impartire la zero cu double-uri
        double x4 = 10.0, y4 = 0.0;
        cout << "Rezultatul impartirii double-urilor: " << operatieDouble(x4, y4, impartireDouble) << endl;

    }
    catch (const exception& e) {
        cout << "Eroare: " << e.what() << endl;
    }

    return 0;
}
