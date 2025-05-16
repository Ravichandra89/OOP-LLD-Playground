/**
 * List Implementation class
 * This class implements the IGoogleDocument interface and represents a list of items.
 * @List cpp
 */

#include "List.hpp"
#include <iostream>
#include <sstream>
#include <vector>
#include <memory>

using namespace std;

// Constructor
List::List(Type type_) : type(type_) {};

// Method to add items to the list
void List::addItems(IGoogleDocument* item) {
    items.push_back(unique_ptr<IGoogleDocument> (item));
};

// Method to render the list
void List::render(int indent) const {
    int idx = 1;
    for (const auto& item : items) {
        std::string bullet = (type== Type::Ordered) ? std::to_string(idx++) + "." : "-";
        std::cout << std::string(indent, ' ') << bullet << " ";
        item->render(0);
    }
}

string List::getText() const {
    string text;
    for (const auto & it : items) {
        text += it->getText() + "\n";
    }
    return text;
};

int List::wordCount() const {
    int total=0; 
    for(const auto& item: items) { 
        total+=item->wordCount();
    } 
    
    return total;
}

vector<const IGoogleDocument*> List::search(const string & keyword) const {
    vector<const IGoogleDocument*> result;
    for (const auto & it : items) {
        auto sub = it->search(keyword);
        result.insert(result.end(), sub.begin(), sub.end());
    }
    return result;
};
