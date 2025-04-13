#ifndef NDADOCUMENT_HPP
#define NDADOCUMENT_HPP

#include <string>
#include "Document.hpp"
#include <memory>

using namespace std;

class NDADocument : public Document {
    private: 
        string title, client, dates, content;
    
    public: 
        // Initilization -> Make Copy -> Customization -> print()
        NDADocument();
        NDADocument(const NDADocument & nda);

        unique_ptr<Document> clone() const override;
        void customize(const string & client, const string & dates) override;
        void print() const override;
};

#endif