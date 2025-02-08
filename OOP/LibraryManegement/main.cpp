#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Book
{
private:
    int bookId;
    string title, author, genre;
    bool isAvailable;

public:
    Book(int bookId, string title, string author, string genre)
        : bookId(bookId), title(title), author(author), genre(genre), isAvailable(true) {}

    int getBookId() const { return bookId; }

    string getTitle() const { return title; }

    bool getAvailability() const { return isAvailable; }

    void setAvailability(bool flag) { isAvailable = flag; }

    void DisplayDetails() const
    {
        cout << "Book ID: " << bookId << ", Title: " << title << ", Author: " << author
             << ", Genre: " << genre << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

class User
{
protected:
    int userId;
    string name, email;

public:
    User(int userId, string name, string email)
        : userId(userId), name(name), email(email) {}

    virtual void DisplayDetails()
    {
        cout << "Username: " << name << ", User ID: " << userId << ", Email: " << email << endl;
    }

    int getUserId() const { return userId; }

    virtual ~User() {}
};

class Librarian : public User
{
public:
    Librarian(int userId, string name, string email)
        : User(userId, name, email) {}

    void addBooks(vector<Book> &books, int bookId, string title, string genre, string author)
    {
        books.emplace_back(bookId, title, author, genre);
        cout << "Book \"" << title << "\" added successfully!" << endl;
    }

    void removeBooks(vector<Book> &books, int bookId)
    {
        for (auto it = books.begin(); it != books.end(); ++it)
        {
            if (it->getBookId() == bookId)
            {
                cout << "Book \"" << it->getTitle() << "\" removed successfully!" << endl;
                books.erase(it);
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void DisplayDetails() override
    {
        cout << "Librarian Details: " << endl;
        User::DisplayDetails();
    }
};

class Library
{
private:
    vector<Book> books;
    unordered_map<int, User *> users;

public:
    ~Library()
    {
        for (auto it : users)
        {
            delete it.second;
        }
    }

    void addUser(User *user)
    {
        int userId = user->getUserId();
        users[userId] = user;
        cout << "User with ID " << userId << " added successfully!" << endl;
    }

    void addBook(int librarianId, int bookId, string title, string author, string genre)
    {
        if (users.count(librarianId))
        {
            Librarian *librarian = dynamic_cast<Librarian *>(users[librarianId]);
            if (librarian)
                librarian->addBooks(books, bookId, title, genre, author);
            else
                cout << "Only librarians can add books." << endl;
        }
        else
        {
            cout << "Librarian not found." << endl;
        }
    }

    void removeBook(int librarianId, int bookId)
    {
        if (users.count(librarianId))
        {
            Librarian *librarian = dynamic_cast<Librarian *>(users[librarianId]);
            if (librarian)
                librarian->removeBooks(books, bookId);
            else
                cout << "Only librarians can remove books." << endl;
        }
        else
        {
            cout << "Librarian not found." << endl;
        }
    }

    void borrowBook(int userId, int bookId)
    {
        if (users.count(userId))
        {
            for (auto &book : books)
            {
                if (book.getBookId() == bookId)
                {
                    if (book.getAvailability())
                    {
                        book.setAvailability(false);
                        cout << "Book \"" << book.getTitle() << "\" borrowed by user " << userId << "." << endl;
                    }
                    else
                    {
                        cout << "Book \"" << book.getTitle() << "\" is currently unavailable." << endl;
                    }
                    return;
                }
            }
            cout << "Book not found." << endl;
        }
        else
        {
            cout << "User not found." << endl;
        }
    }

    void returnBook(int userId, int bookId)
    {
        if (users.count(userId))
        {
            for (auto &book : books)
            {
                if (book.getBookId() == bookId)
                {
                    if (!book.getAvailability())
                    {
                        book.setAvailability(true);
                        cout << "Book \"" << book.getTitle() << "\" returned by user " << userId << "." << endl;
                    }
                    else
                    {
                        cout << "Book \"" << book.getTitle() << "\" is already available." << endl;
                    }
                    return;
                }
            }
            cout << "Book not found." << endl;
        }
        else
        {
            cout << "User not found." << endl;
        }
    }

    void displayBooks() const
    {
        cout << "Available Books in Library:" << endl;
        for (const auto &book : books)
        {
            book.DisplayDetails();
        }
    }

    void displayUsers() const
    {
        cout << "Registered Users:" << endl;
        for (const auto &user : users)
        {
            user.second->DisplayDetails();
        }
    }
};

int main()
{
    Library library;

    // Add Librarian
    User *librarian = new Librarian(1, "John Doe", "john.doe@example.com");
    library.addUser(librarian);

    // Add Books
    library.addBook(1, 101, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction");
    library.addBook(1, 102, "1984", "George Orwell", "Dystopian");

    // Display Books
    library.displayBooks();

    // Borrow and Return Books
    User *user = new User(2, "Jane Smith", "jane.smith@example.com");
    library.addUser(user);

    library.borrowBook(2, 101);
    library.returnBook(2, 101);

    // Remove Book
    library.removeBook(1, 102);

    // Display Remaining Books and Users
    library.displayBooks();
    library.displayUsers();

    return 0;
}
