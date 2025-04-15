#include<iostream>
#include<mutex>

using namespace std;

class Singleton {
    private:
        static Singleton* instance;
        static mutex mtx;

        // private constructor
        Singleton() {
            cout << "Singleton instance created." << endl;
        }

        // private copy constructor
        Singleton(const Singleton&) = delete;
        Singleton& operator = (const Singleton&) = delete;
    
    public:
        static Singleton* getInstance() {
            lock_guard<mutex> lock(mtx);
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
mutex Singleton::mtx;

int main() {
    Singleton * s = Singleton::getInstance();
    s->doSomething();

    return 0;
}