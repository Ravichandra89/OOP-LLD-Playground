#ifndef Logger_hpp
#define Logger_hpp

#include <string>
#include <mutex>

using namespace std;

class Logger {
    private: 
        static int count;
        static Logger* loggerInstance;
        static mutex mtx;
        
        // Private constructor
        Logger();
    
    public: 
        static Logger* getLogger();
        void logs(const string & message);

};

#endif