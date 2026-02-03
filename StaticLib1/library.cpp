#include "pch.h"
#include "library.h"
#include <iostream>
using namespace std;
Book createBook(const string& title,
    const string& author,
    int year,
    double price)
{
    return { title, author, year, price };
}
void printBook(const Book& book)
{
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
    cout << "Price: " << book.price << endl << endl;
}
void printLibrary(const Library& library)
{
    for (int i = 0; i < library.count; i++) {
        printBook(library.books[i]);
    }
}
double averageBookPrice(const Library& library)
{
    if (library.count == 0) return 0;
    double sum = 0;
    for (int i = 0; i < library.count; i++) {
        sum += library.books[i].price;
    }
    return sum / library.count;
}
Book oldestBookInLibrary(const Library& library)
{
    Book oldest = library.books[0];
    for (int i = 1; i < library.count; i++) {
        if (library.books[i].year < oldest.year)
            oldest = library.books[i];
    }
    return oldest;
}