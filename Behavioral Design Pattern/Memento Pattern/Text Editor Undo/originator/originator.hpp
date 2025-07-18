#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP

#include "../memento/memento.hpp"
#include <string>
using namespace std;

class Document {
        string content;
    public: 
        void type(const string& text) {
            content += text;
        }

        // Save the State
        shared_ptr<DocumentMemento> save() const {
            return make_shared<DocumentMemento>(content);
        }

        // Restore the state
        void restore(const shared_ptr<DocumentMemento>& memento) {
            content = memento->getState();
        }

        // GetContent
        const string getContent() const {
            return content;
        }
};

#endif