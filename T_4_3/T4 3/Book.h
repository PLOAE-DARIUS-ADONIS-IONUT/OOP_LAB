#pragma once
#include <string>
#include <vector>
#include "Review.h"

class Book {
private:
    std::string title;
    std::vector<Review> reviews;

public:
    Book(std::string t);
    void addReview(const Review& review);
    void searchReviewContent(const std::string& text) const;
    std::string getTitle() const;
};