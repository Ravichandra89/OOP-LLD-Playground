#ifndef INVOICEDOCUMENT_HPP
#define INVOICEDOCUMENT_HPP

#include <string>
#include "Document.hpp"
#include <memory>

using namespace std;

class InvoiceDocument : public Document
{
private:
    string title, content, client, dates;

public:
    InvoiceDocument();
    InvoiceDocument(const InvoiceDocument &invoice);
    unique_ptr<Document> clone() const override;
    void customize(const string &client, const string &dates) override;
    void print() const override;
};

#endif