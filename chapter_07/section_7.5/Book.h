#ifndef BOOK_H
#define BOOK_h

#include <string>
#include <iostream>

class Book
{
friend std::ostream& show_book_info(std::ostream&, const Book&);
public:
    Book() = default;
    Book(const std::string& s, unsigned int pages, double _price)
    : title(s), n_pages(pages), price(_price) {}
private:
    std::string title;
    unsigned int n_pages;
    double price;
};

std::ostream& show_book_info(std::ostream& os, const Book& book)
{
    os << "Book title: " << book.title << "\n"
       << "Pages: " << book.n_pages << "\n"
       << "Price: " << book.price;
    return os;
}

#endif
