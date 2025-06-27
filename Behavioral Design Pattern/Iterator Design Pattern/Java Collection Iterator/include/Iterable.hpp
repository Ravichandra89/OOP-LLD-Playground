#ifndef ITERABLE_HPP
#define ITERABLE_HPP

#include <memory>
using namespace std;

class Iterable {
    public :    
        virtual ~Iterable() = default;
        virtual bool hasNext() = 0;
        virtual int next() = 0;
};

class IterableCollection {
    public : 
        virtual ~IterableCollection() = default;
        virtual unique_ptr<Iterable> iterator() = 0;
};

#endif