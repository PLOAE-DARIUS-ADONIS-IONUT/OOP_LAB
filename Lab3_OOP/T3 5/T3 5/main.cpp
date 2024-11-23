#include <iostream>
#include <string>

using namespace std;

// Definim clasa AplicatieBanca
class AplicatieBanca
{
private:
    // Nume de utilizator si parola hardcodate
    string numeUtilizator = "Darius";
    string parola = "parola";

    // Informatii despre utilizator
    double sold;
    bool esteAutentificat;

    // Variabila statica pentru a numara utilizatorii
    static int numarUtilizatori;

public:
    // Constructor
    AplicatieBanca() : sold(0.0), esteAutentificat(false)
    {
        numarUtilizatori++;
    }

    // Destructor
    ~AplicatieBanca()
    {
        numarUtilizatori--;
    }

    // Functie pentru a autentifica utilizatorul
    void autentificare(string utilizator, string parolaIntroducere)
    {
        if (utilizator == numeUtilizator && parolaIntroducere == parola)
        {
            esteAutentificat = true;
            cout << "Autentificare reusita!" << endl;
        }
        else
            cout << "Nume de utilizator sau parola incorecte!" << endl;
    }

    // Functie pentru a depune bani
    void depunere(double suma)
    {
        if (!esteAutentificat)
        {
            cout << "Te rog sa te autentifici mai intai pentru a efectua aceasta operatie." << endl;
            return;
        }

        if (suma > 0)
        {
            sold += suma;
            cout << "Depunere reusita! Sold curent: " << sold << " lei" << endl;
        }
        else
            cout << "Suma invalida. Te rog sa introduci o suma pozitiva." << endl;
    }

    // Functie pentru a retrage bani
    void retragere(double suma)
    {
        if (!esteAutentificat)
        {
            cout << "Te rog sa te autentifici mai intai pentru a efectua aceasta operatie." << endl;
            return;
        }

        if (suma > 0 && suma <= sold)
        {
            sold -= suma;
            cout << "Retragere reusita! Sold curent: " << sold << " lei" << endl;
        }
        else
            if (suma > sold)
                cout << "Sold insuficient. Sold curent: " << sold << " lei" << endl;
            else
                cout << "Suma invalida. Te rog sa introduci o suma pozitiva." << endl;
    }

    // Functie pentru a afisa soldul curent
    void afiseazaSold()
    {
        if (!esteAutentificat)
        {
            cout << "Te rog sa te autentifici mai intai pentru a efectua aceasta operatie." << endl;
            return;
        }

        cout << "Soldul curent: " << sold << " lei" << endl;
    }

    // Functie statica pentru a obtine numarul de utilizatori
    static int obtineNumarUtilizatori() {
        return numarUtilizatori;
    }
};

// Initializam variabila statica
int AplicatieBanca::numarUtilizatori = 0;

int main() {
    // Cream o instanta a clasei AplicatieBanca
    AplicatieBanca aplicatieBanca;

    // Operatie de autentificare
    string numeUtilizator, parolaIntroducere;
    cout << "Introduceti numele de utilizator: ";
    cin >> numeUtilizator;
    cout << "Introduceti parola: ";
    cin >> parolaIntroducere;
    aplicatieBanca.autentificare(numeUtilizator, parolaIntroducere);

    // Efectuam cateva operatii
    aplicatieBanca.depunere(100.0);     // Depunere 100 lei
    aplicatieBanca.retragere(50.0);     // Retragere 50 lei
    aplicatieBanca.afiseazaSold();     // Afisam soldul curent

    // Afisam numarul de utilizatori existenti
    cout << "Numar de utilizatori existenti: " << AplicatieBanca::obtineNumarUtilizatori() << endl;

    return 0;
}
