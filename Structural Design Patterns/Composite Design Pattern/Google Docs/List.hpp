#ifndef COMPOSITE_LIST_HPP
#define COMPOSITE_LIST_HPP

#include "IGoogleDocument.hpp"
#include <string>
#include <vector>
#include <memory>


using namespace std;

class List : public IGoogleDocument {
    public: 
        enum class Type {
            Ordered,
            Unordered
        };

        explicit List(Type type);
        void addItems(IGoogleDocument* item);
        void render(int indent  = 0) const override;
        string getText() const override;
        int wordCount() const override;
        vector<const IGoogleDocument*> search(const string & keyword) const override;

    private: 
        Type type;
        vector<unique_ptr<IGoogleDocument>> items;
};

#endif