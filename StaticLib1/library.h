
#pragma once
#include <string>
struct Book {
    std::string title;
    std::string author;
    int year;
    double price;
};
struct Library {
    std::string name;
    Book* books;
    int count;
};

Book createBook(const std::string& title,
    const std::string& author,
    int year,
    double price);
void printBook(const Book& book);

void printLibrary(const Library& library);
double averageBookPrice(const Library& library);
Book oldestBookInLibrary(const Library& library);