#include "Library.h"
#include "Book.h"
#include "Review.h"
#include <iostream>

int main() {
    Library library;
    Book book1("The FINAL Boss");
    book1.addReview(Review("Fantastic book!", "Smith"));
    book1.addReview(Review("A timeless classic.", "Bob"));

    library.addBook(book1);

    std::cout << "Search results for 'classic':\n";
    library.searchInReviews("classic");

    return 0;
}