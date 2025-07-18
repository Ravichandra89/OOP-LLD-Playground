/**
 * Managing the Internal State for Text Editor - Undo functionality
 */
#ifndef DOCUMENT_MEMENTO_HPP
#define DOCUMENT_MEMENTO_HPP

#include<string>
using namespace std;

class DocumentMemento {
        string state;
    public :
        // Constructor 
        explicit DocumentMemento(const string & state) : state(state){}

        // getState
        const string getState() const {
            return state;
        }
};

#endif