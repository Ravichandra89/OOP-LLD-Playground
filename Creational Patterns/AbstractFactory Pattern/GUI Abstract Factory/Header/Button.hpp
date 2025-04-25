#ifndef Button_hpp
#define Button_hpp

class Button {
    public: 
        virtual ~Button() = default;
        virtual void paint() const = 0;
};

#endif