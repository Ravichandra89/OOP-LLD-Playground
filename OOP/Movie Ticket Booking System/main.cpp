/*
Classes : User, Movie, Show, Ticket, Payment, Transactions, Databse, bookingSystem (Main Class)

User : username, password

Movie: movieId, title, genre, ratings

Show: showId, movieId, totalSeats, availableSeats,showTime

Ticket: ticketId, userId, showId, numSeats;

Payment: processingPayments()

Transactions: transactionId, userId, amount;

Data : addUser(), addMovie(), addShow(), addTicket(), getMovieById, getShowById

BookingSystem: registerUser(), loginUser(), addMovie(), addShow(), listMovies(), listShows(), BookTicket(),

*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string PasswordHashing(string password)
{
    hash<string> hasher;
    string temp = to_string(hasher(password));
    return temp;
}

class User
{
private:
    string username;
    string hashedPassword;

public:
    User(string username, string password)
    {
        this->username = username;
        hashedPassword = PasswordHashing(password);
    };

    bool authenticated(const string &user, const string &password)
    {
        string temp = PasswordHashing(password);
        return (user == username) && (hashedPassword == temp);
    }

    string getUserName() const
    {
        return username;
    }
};

class Movie
{
private:
    int movieId;
    string title, genre;
    double ratings;

public:
    Movie(int id, string title, string genre, double ratings)
    {
        this->movieId = id;
        this->title = title;
        this->genre = genre;
        this->ratings = ratings;
    };

    int getMovieId() const
    {
        return movieId;
    }

    string getTitle() const
    {
        return title;
    }

    string getGenre() const
    {
        return genre;
    }

    double getRatings() const
    {
        return ratings;
    }
};

class Show
{
private:
    int showId, movieId, totalSeats, availableSeats;
    string time;

public:
    Show(int showId, int totalSeats, int availableSeats, int movieId, string time)
    {
        this->showId = showId;
        this->movieId = movieId;
        this->totalSeats = totalSeats;
        this->availableSeats = availableSeats;
    }

    // Check the seats stock for Booking show
    bool bookSeats(int numSeats)
    {
        if (availableSeats >= numSeats)
        {
            availableSeats -= numSeats;
            return true;
        }
        return false;
    }

    int getShowId() const
    {
        return showId;
    }

    int getMovieId() const
    {
        return movieId;
    }

    string getTime() const
    {
        return time;
    }

    int getAvailableSeats() const
    {
        return availableSeats;
    }
};

class Ticket
{
private:
    int ticketId, showId, numSeats;
    string username;

public:
    Ticket(int ticketId, int showId, int numSeats, string username)
    {
        this->username = username;
        this->showId = showId;
        this->ticketId = ticketId;
        this->numSeats = numSeats;
    }

    int getTicketId() const
    {
        return ticketId;
    }

    string getUserName() const
    {
        return username;
    }

    int getShowId() const
    {
        return showId;
    }

    int getNumSeats() const
    {
        return numSeats;
    }
};

class Payment
{
public:
    bool processPayment(double amount)
    {
        cout << "Payment of $" << amount << " processed successfully.\n";
        return true;
    }
};

class Transactions
{ // Storing Transaction Details
private:
    int transactionId;
    string username;
    double amount;

public:
    Transactions(int id, string name, double amount)
    {
        this->transactionId = id;
        this->username = name;
        this->amount = amount;
    }

    int getTransactionId() const
    {
        return transactionId;
    }

    string getUserName() const
    {
        return username;
    }

    double getAmount() const
    {
        return amount;
    }
};

class DataBase
{
private:
    vector<Movie> movies;
    vector<Transactions> transactions;
    vector<Show> shows;
    vector<Ticket> tickets;
    unordered_map<string, User> users;

public:
    // Adding user
    void addUser(const User &user)
    {
        users[user.getUserName()] = user;
    }

    // add Movie
    void addMovie(const Movie &mv)
    {
        movies.push_back(mv);
    }

    // Add the Show
    void addShow(const Show &show)
    {
        shows.push_back(show);
    };

    void addTicket(const Ticket &ticket)
    {
        tickets.push_back(ticket);
    };

    void addTransactions(const Transactions &transaction)
    {
        transactions.push_back(transaction);
    };

    // Getting MovieById
    Movie *getMovieById(int movieId)
    {
        for (auto &movie : movies)
        {
            if (movie.getMovieId() == movieId)
                return &movie;
        }
        return nullptr;
    }

    Show *getShowById(int showId)
    {
        for (auto &it : shows)
        {
            if (it.getShowId() == showId)
            {
                return &it;
            }
            return nullptr;
        }
    }

    // Supporter function
    bool userExists(const string &username)
    {
        return users.find(username) != users.end();
    }

    User *getUser(const string &username)
    {
        return userExists(username) ? &users[username] : nullptr;
    }
};

class BookingSystem : public DataBase
{
private:
    int ticketCounter = 1;
    int transactionCounter = 1;
    DataBase db;

public:
    // Register User
    void RegisterUser(const string &username, const string &password)
    {
        if (db.userExists(username))
        {
            cout << "User already exists.\n";
        }
        db.addUser(User(username, password));
        cout << "User registered successfully.\n";
    }

    bool loginUser(const string &username, const string &password)
    {
        User *user = db.getUser(username);

        if (user && user->authenticated(username, password))
        {
            cout << "Login Successfully.\n";
            return true;
        }
        cout << "Invalid Credentials";
        return false;
    }

    
};