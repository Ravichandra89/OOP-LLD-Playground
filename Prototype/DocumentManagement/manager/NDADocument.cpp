#include <iostream>
#include <vector>
#include "NDADocument.hpp"

using namespace std;

NDADocument::NDADocument() : 
title("Non-Disclosure Agreement"),
content("Standard NDA clauses..."),
client(""),
dates("")
{
    // Print the message that initilization is done
    cout << "NDADocument initialized with default values." << endl;
};

NDADocument::NDADocument(const NDADocument & nda) : 
title(nda.title),
content(nda.content),
client(nda.client),
dates(nda.dates) { };

// Make a clone of the NDA Document
unique_ptr<Document> NDADocument::clone() const {
    return make_unique<NDADocument>(*this); // simple copy constructor
};


// Customize the document
void NDADocument::customize(const string & client, const string & dates) {
    this->client = client;
    this->dates = dates;
    cout << "Document customized for client: " << client << " with dates: " << dates << endl;
};

// Print the document
void NDADocument::print() const {
    cout << "Title: " << title << endl;
    cout << "Client: " << client << endl;
    cout << "Dates: " << dates << endl;
    cout << "Content: " << content << endl;
    cout << "----------------------------------------" << endl;
};



