#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Student {
private:
    string nume;
    float nota;

public:
    // Constructor
    Student(string n, float notaVal) : nume(n), nota(notaVal) {}

    string getNume() const { return nume; }
    float getNota() const { return nota; }

    // Functii statice pentru sortarea dupa nume sau nota
    static bool comparaDupaNume(const Student& s1, const Student& s2) {
        return s1.nume < s2.nume;
    }

    static bool comparaDupaNota(const Student& s1, const Student& s2) {
        return s1.nota > s2.nota;
    }
};

// Functie pentru a gasi studentii cu cea mai mare nota
void gasesteStudentiiCuCeaMaiMareNota(const vector<Student>& studenti) {
    if (studenti.empty()) {
        cout << "Nu exista studenti in lista." << endl;
        return;
    }

    // Gasim cea mai mare nota
    float ceaMaiMareNota = studenti[0].getNota();
    for (const auto& student : studenti) {
        if (student.getNota() > ceaMaiMareNota) {
            ceaMaiMareNota = student.getNota();
        }
    }

    // Afisam toti studentii cu cea mai mare nota
    cout << "Studentii cu cea mai mare nota (" << ceaMaiMareNota << "):" << endl;
    for (const auto& student : studenti) {
        if (student.getNota() == ceaMaiMareNota) {
            cout << student.getNume() << " cu nota " << student.getNota() << endl;
        }
    }
}

int main() {
    // Cream o lista de studenti
    vector<Student> studenti = {
        Student("Alice", 90.5),
        Student("Bob", 85.0),
        Student("Charlie", 92.0),
        Student("David", 92.0)
    };

    // Afisam studentii cu cea mai mare nota
    gasesteStudentiiCuCeaMaiMareNota(studenti);

    return 0;
}
