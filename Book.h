// Book.h
//
// Class to keep track of a book in the store
// the class to set and get information about an book: the ISBN author,
// title, and cost  

#ifndef BOOK_H
#define BOOK_H
#include <string>
class Book
{
public:
	Book();
	Book(int isbn, std::string author, std::string title, double cost);
	Book(int isbn);
	Book(std::string author);
	Book(std::string author, std::string title);
	void setISBN(int isbn);
	void setAuthor(std::string author);
	void setTitle(std::string title);
	void setCost(double cost);
	int getISBN();
	std::string getAuthor();
	std::string getTitle();
	double getCost();
private:
	int isbn;
	std::string author;
	std::string title;
	double cost;
};
#endif
