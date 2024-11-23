#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Definim structura Persoana
struct Persoana {
    string nume;
    int varsta;

    // Constructor pentru a initializa datele
    Persoana(string n, int v) : nume(n), varsta(v) {}
};

// Comparator pentru a sorta dupa varsta, in ordine descrescatoare
bool comparaDupaVarsta(const Persoana& p1, const Persoana& p2) {
    return p1.varsta > p2.varsta;  // Ordine descrescatoare
}

// Comparator pentru a sorta dupa nume, in ordine crescatoare
bool comparaDupaNume(const Persoana& p1, const Persoana& p2) {
    return p1.nume < p2.nume;  // Ordine crescatoare
}

int main() {
    // Crearea unei liste de persoane 
    vector<Persoana> persoane = {
        Persoana("Andrei", 30),
        Persoana("Ioana", 25),
        Persoana("Mihai", 35),
        Persoana("Maria", 20),
        Persoana("Vasile", 28),
        Persoana("Elena", 22)
    };

    // Afisarea listei initiale
    cout << "Lista initiala:" << endl;
    for (const auto& persoana : persoane) {
        cout << persoana.nume << ", " << persoana.varsta << endl;
    }
    cout << endl;

    // Sortarea dupa varsta (descrescator)
    sort(persoane.begin(), persoane.end(), comparaDupaVarsta);

    // Afisarea listei dupa sortarea dupa varsta
    cout << "Lista sortata dupa varsta (descrescator):" << endl;
    for (const auto& persoana : persoane) {
        cout << persoana.nume << ", " << persoana.varsta << endl;
    }
    cout << endl;

    // Sortarea dupa nume (crescator)
    sort(persoane.begin(), persoane.end(), comparaDupaNume);

    // Afisarea listei dupa sortarea dupa nume
    cout << "Lista sortata dupa nume (crescator):" << endl;
    for (const auto& persoana : persoane) {
        cout << persoana.nume << ", " << persoana.varsta << endl;
    }

    return 0;
}
