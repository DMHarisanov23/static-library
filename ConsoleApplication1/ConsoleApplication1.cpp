#include <iostream>
#include "library.h"
using namespace std;
int main()
{
	Library lib;
	lib.name = "My Library";
	lib.count = 3;
	lib.books = new Book[3];
	lib.books[0] = createBook("1984", "George Orwell", 1949, 15.50);
	lib.books[1] = createBook("The Hobbit", "J.R.R. Tolkien", 1937, 22.90);
	lib.books[2] = createBook("Dune", "Frank Herbert", 1965, 18.00);
	printLibrary(lib);
	cout << "Average price: " << averageBookPrice(lib) << endl;
	Book oldest = oldestBookInLibrary(lib);
	cout << "Oldest book:" << endl;
	printBook(oldest);
}