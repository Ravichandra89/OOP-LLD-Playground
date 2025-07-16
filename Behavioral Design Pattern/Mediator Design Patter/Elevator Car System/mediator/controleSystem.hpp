/**
 * Define the whole control system mediator interface.
 */

#ifndef MEDIATOR_CONTROLESYSTEM_HPP
#define MEDIATOR_CONTROLESYSTEM_HPP

#include <string>
#include <vector>
using namespace std;

// Forward Declarations of Colleagues
class CarPanel;
class FloorPanel;
class ElevatorCar;

class ControleSystem
{

private:
    // Private members can be added here if needed
    vector<ElevatorCar *> cars;
    vector<FloorPanel *> floors;
    vector<CarPanel *> cars;

    // internal methods
    void dispatchCar(int floor, bool direction);
    void handleDropOff(int carId, int floor);

public:
    virtual ~ControleSystem() = default;

    virtual void registerCar(ElevatorCar *car) = 0;
    virtual void registerFloorPanel(FloorPanel *panel) = 0;
    virtual void registerCarPanel(CarPanel *panel) = 0;

    // Pickup and drop off requests handlers
    virtual void requestPickup(int floor, bool direction) = 0;
    virtual void requestDropOff(int carId, int floor) = 0;

    // UpdateCar Status Method
    virtual void updateCarStatus(int carId, const string& status) = 0;
};

#endif