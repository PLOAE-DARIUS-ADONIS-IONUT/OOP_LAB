#include "Student.h"
#include <iostream>

Student::Student(std::string n, Address a, double g) : Person(n, a), grade(g) {}

double Student::getGrade() const {
    return grade;
}