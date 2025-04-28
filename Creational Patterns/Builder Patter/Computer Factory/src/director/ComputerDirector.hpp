#ifndef Computer_Director_hpp
#define Computer_Directory_hpp

#include "../builder/IBuilder.hpp"

class ComputerDirector {
    public:
        void construct(IBuilder & build) const;
};

#endif