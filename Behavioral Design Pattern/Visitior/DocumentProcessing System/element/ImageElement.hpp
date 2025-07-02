#ifndef IMAGE_CONCRETE_ELEMENT_HPP
#define IMAGE_CONCRETE_ELEMENT_HPP

#include "IDocument.hpp"
#include <string>

using namespace std;

class ImageElement : public IDocument {
        string url_;
    public: 
        ImageElement(const string & url) : url_(url) {}

        const string getUrl() const {
            return url_;
        }

        void accept(IVisitor& vis) override {
            vis.visit(*this);
        }
};

#endif