#include "Paragraph.hpp"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// constructor
Paragraph::Paragraph(const string & text_) : text(text_) {};

// Method to render the pragraph
void Paragraph::render(int indent) const {
    cout << string(indent, ' ') << text << endl;
}

// Method to get the text of the paragraph
string Paragraph::getText() const {
    return text;
};

// Method to count the words in paragraph
int Paragraph::wordCount() const {
    istringstream iss(text);
    int count = 0; 
    string w; 

    while (iss >> w) {
        count++;
    }

    return count;
};

// Method to search for a keyword in the paragraph
vector<const IGoogleDocument*> Paragraph::search(const string & keyword) const {
    vector<const IGoogleDocument*> result;
    if (text.find(keyword) != string::npos) {
        result.push_back(this);
    };
    return result;
}

