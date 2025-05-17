#ifndef COMPOSITE_PATTERN_IMAGE_HPP
#define COMPOSITE_PATTERN_IMAGE_HPP

#include "IGoogleDocument.hpp"
#include <memory>
#include <string>
#include <vector>

using namespace std;

class Image : public IGoogleDocument {
        string imgPath;
    
    public: 
        /**
         * Explicit ensure that there is no any implicit conversion for this object.
         */

        explicit Image(const string & path);
        void render(int indent = 0) const override;
        string getText() const override;
        int wordCount() const override;
        vector<const IGoogleDocument*> search(const string & keyword) const override;
};

#endif