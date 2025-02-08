#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
========= Forward Declarations ========
*/

class Participants
{
};

/*
=========== Class :: Events ==========
*/

class Event
{
private:
    int eventId;
    string eventName, eventDate, venue, description;
    vector<Participants> participants;

public:
    Event(int eventId, string eventName, string eventDate, string venue, string description)
    {
        this->eventId = eventId;
        this->eventName = eventName;
        this->eventDate = eventDate;
        this->venue = venue;
        this->description = description;
    }

    int getEventId() const
    {
        return eventId;
    }

    string getEventName() const
    {
        return eventName;
    }

    string getEventDate() const
    {
        return eventDate;
    }

    string getEventVenue() const
    {
        return venue;
    }

    string getEventDes() const
    {
        return description;
    }

    // updateEvent(), display(), addParticipants(), displayParticipants()
    void updateEvent(const string &name, const string &date, const string &venue, const string &des)
    {
        this->eventName = name;
        this->eventDate = date;
        this->venue = venue;
        this->description = des;

        cout << "Event Details Updated Successfully" << endl;
    }

    void display()
    {
        cout << "Event ID: " << eventId << endl;
        cout << "Event Name: " << eventName << endl;
        cout << "Event Date: " << eventDate << endl;
        cout << "Event Venue: " << venue << endl;
        cout << "Event Description: " << description << endl;
    }

    void addParticipants(const Participants &p)
    {
        participants.push_back(p);
        cout << "Participants Registered Successfully!" << endl;
    }

    void displayParticipants()
    {
        cout << "Registered Participants: " << endl;
        for (const auto &it : participants)
        {
            it.display();
        }
    }
};

/*
========= Class Participants ==========
*/

class Participants
{
private:
    string userName;
    int userId;
    string email;

public:
    Participants(int userId, string email, string userName)
    {
        this->userId = userId;
        this->email = email;
        this->userName = userName;
    }

    int getUserId() const
    {
        return userId;
    }

    string getName() const
    {
        return userName;
    }

    string getEmail() const
    {
        return email;
    }

    void display() const
    {
        cout << "User ID: " << userId << endl;
        cout << "Email: " << email << endl;
        cout << "User Name: " << userName << endl;
    }
};

/*
====== EventManager ========
*/

class EventManager {
    private: 
        vector<Event> events;

    public: 
        // addEvent() removeEvent() updateEvent() displayEvents() searchEvent() registerParticipants() displayEvents()
};