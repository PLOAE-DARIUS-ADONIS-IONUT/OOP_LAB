#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Student {
private:
    std::string name;
    float grade;

public:
    Student(std::string n, float g) : name(n), grade(g) {}

    std::string getName() const { return name; }
    float getGrade() const { return grade; }

    // Static function for sorting by name or grade
    static bool compareByName(const Student& s1, const Student& s2) {
        return s1.name < s2.name;
    }

    static bool compareByGrade(const Student& s1, const Student& s2) {
        return s1.grade > s2.grade;
    }
};

int main() {
    std::vector<Student> students = {
        {"Alice", 90.5}, {"Bob", 85.0}, {"Charlie", 92.0}
    };

    // Sort by name
    std::sort(students.begin(), students.end(), Student::compareByName);

    std::cout << "Sorted by name:\n";
    for (const auto& s : students) {
        std::cout << s.getName() << " - " << s.getGrade() << "\n";
    }

    // Sort by grade
    std::sort(students.begin(), students.end(), Student::compareByGrade);

    std::cout << "\nSorted by grade:\n";
    for (const auto& s : students) {
        std::cout << s.getName() << " - " << s.getGrade() << "\n";
    }

    return 0;
}
