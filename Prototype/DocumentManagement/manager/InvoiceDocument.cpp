#include <iostream>
#include <vector>
#include <string>

#include "InvoiceDocument.hpp"

using namespace std;

InvoiceDocument::InvoiceDocument() : 
title("Invoice"),
content("Itemized billing details..."),
client(""),
dates("") {
    cout << "InvoiceDocument initialized with default values." << endl;
};

InvoiceDocument::InvoiceDocument(const InvoiceDocument & invoice) :
title(invoice.title),
content(invoice.content),
client(invoice.client),
dates(invoice.dates) { };

// Copy clone
unique_ptr<Document> InvoiceDocument::clone() const {
    return make_unique<InvoiceDocument> (*this);
}

// Customize the document
void InvoiceDocument::customize(const string & client, const string & dates) {
    this->client = client;
    this->dates = dates;
    cout << "Document customized for client: " << client << " with dates: " << dates << endl;
};

// Print the Document
void InvoiceDocument::print() const {
    cout << "Document Title: " << title << endl;
    cout << "Client: " << client << endl;
    cout << "Dates: " << dates << endl;
    cout << "Content: " << content << endl;

};
