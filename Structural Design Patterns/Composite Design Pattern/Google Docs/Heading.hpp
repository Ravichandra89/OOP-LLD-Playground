/**
 * Leaf Component of the Composite Pattern
 * Represents a Heading in the Google Document
 * @file Heading.hpp
 */

#ifndef COMPOSITE_PATTERN_HEADING_LEAF_HPP
#define COMPOSITE_PATTERN_HEADING_LEAF_HPP

#include "IGoogleDocument.hpp"
#include <string>
#include <vector>

using namespace std;

class Heading : public IGoogleDocument {
        string text;
        int level;
    
    public: 
        explicit Heading(const string & text_, int level_);
        void render(int indent = 0) const override;
        string getText() const override;
        int wordCount() const override;
        vector<const IGoogleDocument*> search(const string & keyword) const override;
};

#endif