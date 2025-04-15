#include <iostream>
using namespace std;

class Singleton {
    private:
        static Singleton* instance; // created instance

        // private constructor
        Singleton() {
            cout << "Singleton instance created." << endl;
        };

        // private copy constructor
        Singleton(const Singleton&) = delete;
        Singleton& operator = (const Singleton&) = delete;
    
    public: 
        static Singleton* getInstance() {
            return instance;
        }

        void doSomething() {
            cout << "Singleton instance doing something." << endl;
        }
        
};

// load time initialization
Singleton* Singleton::instance = new Singleton();

int main() {
    Singleton * s = Singleton::getInstance();
    s->doSomething();

    Singleton * s2 = Singleton::getInstance();
    s2->doSomething();

    return 0;
}
