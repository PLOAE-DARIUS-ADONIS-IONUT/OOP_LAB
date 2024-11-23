#pragma once
#include <string>
#include <iostream>

class Review {
private:
    std::string content;
    std::string reviewer;

public:
    Review(std::string c, std::string r);
    std::string getContent() const;
    std::string getReviewer() const;
    void display() const;
};