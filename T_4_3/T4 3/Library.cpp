#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::searchInReviews(const std::string& text) const {
    for (const auto& book : books) {
        std::cout << "Searching in book: " << book.getTitle() << "\n";
        book.searchReviewContent(text);
    }
}