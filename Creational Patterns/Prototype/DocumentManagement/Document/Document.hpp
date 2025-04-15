/**
 * Define here the Document Interface.
 */

#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <string>
#include <memory>

using namespace std;

class Document {
    public: 
        virtual unique_ptr<Document> clone() const = 0;
        virtual void customize(const string & client, const string & dates) = 0;
        virtual void print() const = 0;
        virtual ~Document() {};
};

#endif