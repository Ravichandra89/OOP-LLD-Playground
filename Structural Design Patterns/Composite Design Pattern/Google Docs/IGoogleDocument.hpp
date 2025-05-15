/**
 * Common Interface for the Google Document
 * Document Component
 * @file IGoogleDocument.hpp
 */

#ifndef COMPOSITE_INTERFACE_GOOGLE_DOCUMENT_HPP
#define COMPOSITE_INTERFACE_GOOGLE_DOCUMENT_HPP

#include <string>
using namespace std;

class IGoogleDocument {
    public: 
        virtual ~IGoogleDocument() = default;
        virtual void render(int inden = 0) const = 0;
        virtual string getText() const = 0;
        virtual int wordCount() const = 0;
        virtual vector<const IGoogleDocument*> search(const string & keyword) const = 0;
};

#endif