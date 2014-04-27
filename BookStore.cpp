/*BookStore class
*Designed to hold 
*	-the number of books in a store(count)
*	-information on each of the books
*	-the capacity of the bookstore
*/
#include "BookStore.h"
#include "Book.h"
//Default constructor to set the number of books to zero
BookStore::BookStore(){
	count = 0;
}
// A function to add a book to the list
// If the array is full, return false, else add the book to the list 
// and return true
// (Needs implement)
// If the book is already in the list, then replace it with aBook 
bool BookStore::addBook(Book aBook){
	int aBookISBN = aBook.getISBN();
	for (int i = 0; i < CAPACITY; i++){
		if (bookList[i].getISBN() == aBookISBN){
			bookList[i] = aBook;
			return true;
		}
	}
	if (count < CAPACITY){
		bookList[0] = aBook;
		return true;
	}
	else{
		return false;
	}
}
bool BookStore::deleteBook(Book aBook){
	int aBookISBN = aBook.getISBN();
	if (count == 0){
		return false;
	}
	for (int i = 0; i < CAPACITY; i++){
		if (bookList[i].getISBN() == aBookISBN){
			bookList[i] = bookList[count--];
			return true;
		}
	}
	return false;
}
bool BookStore::retrieveBook(Book& aBook){
	int aBookISBN = aBook.getISBN();
	if (count == 0){
		return false;
	}
	for (int i = 0; i < CAPACITY; i++){
		if (bookList[i].getISBN() == aBookISBN){
			aBook = bookList[i];
			return true;
		}
	}
	return false;
}
void BookStore::printBookStore(){
	sort();
	for (int i = 0; i < CAPACITY; i++){
		std::cout << "ISBN: " << bookList[i].getISBN() << std::endl
			<< "Author: " << bookList[i].getAuthor() << std::endl
			<< "Title: " << bookList[i].getTitle() << std::endl
			<< "Cost: " << bookList[i].getCost() << std::endl << std::endl;
	}
}
std::ostream& BookStore::operator<<(std::ostream& out,
									const BookStore& store){
	store.sort();
	for (int i = 0; i < CAPACITY; i++){
		std::cout << "ISBN: " << bookList[i].getISBN() << std::endl
			<< "Author: " << bookList[i].getAuthor() << std::endl
			<< "Title: " << bookList[i].getTitle() << std::endl
			<< "Cost: " << bookList[i].getCost() << std::endl << std::endl;
	}
}
void BookStore::sort(){
	bool ordered = false;
	Book aBook;
	while (!ordered){
		ordered = true;
		for (int i = 0; i < CAPACITY; i++){
			if (bookList[i].getCost()>bookList[i + 1].getCost()){
				aBook = bookList[i];
				bookList[i] = bookList[i + 1];
				bookList[i + 1] = aBook;
				ordered = false;
			}
		}
	}
}
