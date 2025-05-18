#include "Section.hpp"
#include <iostream>
using namespace std;

// Constructor for title
Section::Section(const string & title) : title_(title){};

// Method Definition - HERE
void Section::add(unique_ptr<IGoogleDocument> component) {
    childrens.push_back(move(component));
}

void Section::remove(const IGoogleDocument * component) {
    childrens.erase(
        remove_if(childrens.begin(), childrens.end(),
                       [&](const unique_ptr<IGoogleDocument>& ptr) { return ptr.get() == component; }),
        childrens.end());
}

void Section::clear() {
    childrens.clear();
}


void Section::render(int indent) const {
    cout << string(indent, ' ') << "== " << title_ << " ==\n";   
    for (const auto & it : childrens) {
        it->render(indent + 2);
    } 
}

string Section::getText() const {
    string temp = title_ + "\n";
    for (const auto & it : childrens) {
        temp += it->getText() + "\n";
    };

    return temp;
}

int Section::wordCount() const {
    int ans = 0;
    for (const auto & it : childrens) {
        ans += it->wordCount();
    }

    return ans;
}

vector<const IGoogleDocument*> Section::search(const string & keyword) const {
    vector<const IGoogleDocument*> result;
    if (title_.find(keyword) != string::npos) {
        result.push_back(this);
    }

    for (const auto& it : childrens) {
        auto sub = it->search(keyword);
        result.insert(result.end(), sub.begin(), sub.end());
    }

}


