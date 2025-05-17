#ifndef COMPOSITE_PATTERN_SECTION_HPP
#define COMPOSITE_PATTERN_SECTION_HPP

#include "IGoogleDocument.hpp"
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Section : public IGoogleDocument {
        string title_;
    
    public: 
        // Constructor 
        Section(const string & title);
        void add(unique_ptr<IGoogleDocument> component);
        void remove(const IGoogleDocument* component);
        void clear();

        // Inherited Methods
        void render(int indent = 0) const override;
        string getText() const override;
        int wordCount() const override;
        vector<const IGoogleDocument*> search(const string &keyword) const override;
        
};

#endif