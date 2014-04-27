/*BookStore class
*Designed to hold
*	-the number of books in a store(count)
*	-information on each of the books
*	-the capacity of the bookstore
*/
// BookStore.h
const int CAPACITY = 30;

#ifndef BOOKSTORE_H
#define BOOKSTORE_H
#include <iostream>'
#include "Book.h"
class BookStore
{
public:
	BookStore();
	// constructor to set the number of books to zero

	bool addBook(Book aBook);
	// a function to add a book to the list
	//  If the array is full, return false, else add the book to the list and return true
	//  If the book is already in the list, then replace it with aBook 

	bool deleteBook(Book  aBook);
	// a function to delete a book from the list
	//  if the array is empty, or the book is not in the array return false, else remove  
	// the book from the list and return true

	bool retrieveBook(Book& aBook);
	// a function that returns a Book from the list
	//  The input parameter aBook may hold only part or all of the information about 
	//  the book, but must have the book isbn number( to be able to 
	//  compare it  with a book in the list)
	// The function returns true if aBook was in the list, else it returns false

	double totalInvestment();
	// a function that returns the total cost that the bookStore invested in books

	//print the bookStore
	void printBookStore();
	// For each book print the book ISBN number, book author, 
	// book title and cost


	std::ostream& operator<<(std::ostream& out,
									const BookStore& store);
	// overload the << operator, a function to print all the books 
	// in the bookStore in ascending order by cost of  the book.  
	// For each book print the book ISBN number, book author, 
	// book title and cost

private:
	int count; 				 	// actual number of books in store
	Book bookList[CAPACITY];  		// array of books
	void sort();  				// a method to sort the books in the 
	//store by cost of book
};
#endif
