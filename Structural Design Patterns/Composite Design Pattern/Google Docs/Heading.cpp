#include "Heading.hpp"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// Constructor
Heading::Heading(const string & text_, const int level_) : text(text_), level(level_) {};

void Heading::render(int indent) const {
    cout << string(indent, ' ') << string(level, '#') << " " << text << endl;
}

string Heading::getText() const {
    return text;
}

int Heading::wordCount() const {
    istringstream iss(text); 
    int count = 0; 
    string w;
    while(iss>>w) count++; 
    return count;
}

vector<const IGoogleDocument*> Heading::search (const string & keyword) const {
    vector<const IGoogleDocument*> result;
    if (text.find(keyword) != string::npos) {
        result.push_back(this);
    }
    return result;
};

