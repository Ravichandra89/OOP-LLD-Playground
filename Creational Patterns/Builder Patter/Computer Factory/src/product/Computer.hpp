#ifndef Computer_hpp
#define Computer_hpp

#include <string>
using namespace std;

// Interace for the Builder class
class Computer
{
    string cpu;
    string ram;
    string storage;

public:
    void setCPU(const string &cpu);
    void setRAM(const string &ram);
    void setStorage(const string &storage);
    void displayInfo() const; 
};

#endif