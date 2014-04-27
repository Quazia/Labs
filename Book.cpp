/*Book Class
*Designed to hold a book ISBN, author, title, cost
*
*
*/
//
// Book.h
//
// Class to keep track of a book in the store
// the class to set and get information about an book: the ISBN author,
// title, and cost  
#include "Book.h"
Book::Book(){

}
Book::Book(int isbn, std::string author, std::string title, double cost){
	this->isbn = isbn;
	this->title = title;
	this->author = author;
	this->cost = cost;
}
Book::Book(int isbn){
	this->isbn = isbn;
}
Book::Book(std::string author){
	this->author = author;
}
Book::Book(std::string author, std::string title){
	this->author = author;
	this->title = title;
}
void Book::setISBN(int isbn){
	this->isbn = isbn;
}
void Book::setAuthor(std::string author){
	this->author = author;
}
void Book::setTitle(std::string title){
	this->title = title;
}
void Book::setCost(double cost){
	this->cost = cost;
}
int Book::getISBN(){
	return isbn;
}
std::string Book::getAuthor(){
	return author;
}
std::string Book::getTitle(){
	return title;
}
double Book::getCost(){
	return cost;
}
