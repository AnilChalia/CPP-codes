#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    bool available;

public:
    Book(string t, string a, string i) : title(t), author(a), ISBN(i), available(true) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return ISBN; }
    bool isAvailable() const { return available; }

    void borrowBook() { available = false; }
    void returnBook() { available = true; }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayBooks() const {
        cout << "Books in the library:" << endl;
        for (const auto& book : books) {
            cout << book.getTitle() << " by " << book.getAuthor() << " - ISBN: " << book.getISBN();
            if (book.isAvailable()) {
                cout << " (Available)" << endl;
            } else {
                cout << " (Not Available)" << endl;
            }
        }
    }
};

int main() {
    Library library;

    Book book1("The Catcher in the Rye", "J.D. Salinger", "9780316769488");
    Book book2("To Kill a Mockingbird", "Harper Lee", "9780061120084");

    library.addBook(book1);
    library.addBook(book2);

    library.displayBooks();

    return 0;
}
