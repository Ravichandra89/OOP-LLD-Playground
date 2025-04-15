#include <iostream>
using namespace std;

class Singleton {
    private:
        static Singleton* instance; // create when we needed

        Singleton() {
            cout << "Singleton instance created." << endl;
        }

        // private copy constructor
        Singleton(const Singleton&) = delete;
        Singleton& operator = (const Singleton&) = delete;

        public:
            static Singleton* getInstance() {
                if (instance == nullptr) {
                    instance = new Singleton();
                }
                return instance;
            }

            void doSomething() {
                cout << "Singleton instance doing something." << endl;
            }
};

// initialize instance to nullptr
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s = Singleton::getInstance();
    s->doSomething();

    return 0;
}