#pragma once
#include "Person.h"

class Student : public Person {
private:
    double grade;

public:
    Student(std::string n, Address a, double g) : Person(n, a), grade(g) {}

    double getGrade() const { return grade; }

    void display() const {
        std::cout << "Student: " << getName() << ", Grade: " << grade << "\n";
        getAddress().display();
    }
};