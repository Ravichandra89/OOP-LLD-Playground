#ifndef IBuilder_hpp
#define IBuilder_hpp

#include "../product/Computer.hpp"

class IBuilder {
    public: 
        virtual ~IBuilder() = default;
        virtual void buildCpu() = 0;
        virtual void buildRam() = 0;
        virtual void buildStorage() = 0;
        virtual Computer* getResult() = 0;
};

#endif