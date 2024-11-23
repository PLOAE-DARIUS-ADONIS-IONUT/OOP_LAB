#include "Review.h"

Review::Review(std::string c, std::string r) : content(c), reviewer(r) {}

std::string Review::getContent() const { return content; }
std::string Review::getReviewer() const { return reviewer; }

void Review::display() const {
    std::cout << reviewer << ": " << content << "\n";
}