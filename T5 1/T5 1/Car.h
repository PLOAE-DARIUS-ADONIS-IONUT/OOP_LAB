#pragma once
#include <vector>
#include "Vehicle.h"
#include "Student.h"

class Car : public Vehicle {
private:
    std::vector<Student*> passengers;

public:
    void addPassenger(Student* student) { passengers.push_back(student); }
    int getPassengerCount() const { return passengers.size(); }
};