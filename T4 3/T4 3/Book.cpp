#include "Book.h"
#include <iostream>

Book::Book(std::string t) : title(t) {}

void Book::addReview(const Review& review) {
    reviews.push_back(review);
}

void Book::searchReviewContent(const std::string& text) const {
    for (const auto& review : reviews) {
        if (review.getContent().find(text) != std::string::npos ||
            review.getReviewer().find(text) != std::string::npos) {
            review.display();
        }
    }
}

std::string Book::getTitle() const { return title; }