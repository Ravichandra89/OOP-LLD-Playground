#include <iostream>
#include "components/BaseTicketPrice.hpp"
#include "decorators/TicketDecorator.hpp"
#include "decorators/FoodComboDecorator.hpp"
#include "decorators/CouponDecorator.hpp"
#include "decorators/InsuranceDecorator.hpp"
#include "decorators/ConcessionDecorator.hpp"
#include "components/ITicketPrice.hpp"

using namespace std;

int main()
{
    ITicketPrice *ticket = new BaseTicketPrice(300);
    ticket = new ConcessionDecorator(ticket, 0.5);
    ticket = new FoodComboDecorator(ticket, 150);
    ticket = new InsuranceDecorator(ticket, 20);
    ticket = new CouponDecorator(ticket, 50);

    cout << "Total ticket price : " << ticket->getTicketPrice() << endl;

    delete ticket;
    return 0;
}