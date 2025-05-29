#include "Observer/phoneDisplay.hpp"
#include "Observer/LaptopDisplay.hpp"
#include "Observer/TvDisplay.hpp"

#include "Subject/Subject.hpp"
#include "Subject/weatherSubject.hpp"

int main() {
    WeatherStation station;

    PhoneDisplay phone;
    TvDisplay tv;
    LaptopDisplay laptop;


    // Add the observers
    station.addObserver(&phone);
    station.addObserver(&tv);
    station.addObserver(&laptop);

    // Changing the weather 
    cout << "Changing the weather condition first time " << endl;
    station.setWeather("Sunny, 30°C");
    phone.display();
    tv.display();
    laptop.display();


    // Changing the weather Again
    station.setWeather("Rainy, 18°C");
    phone.display();
    tv.display();
    laptop.display();

    cout << "Removing tv Observer " << endl;
    station.removeObserver(&tv);

    station.setWeather("Windy, 22°C");
    phone.display();
    tv.display(); // Shows the old weather condition
    laptop.display();

    return 0;
}