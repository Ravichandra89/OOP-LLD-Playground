#ifndef INTERFACE_EMPLOYEE_ITERATOR_HPP
#define INTERFACE_EMPLOYEE_ITERATOR_HPP

#include "Employee.hpp"
#include <string>
using namespace std;



class IEmployeeIterator {
    public : 
        virtual ~IEmployeeIterator() = default;

        // hasNext(), next()
        virtual bool hasNext() = 0;
        virtual const Employee& next()= 0;
};

#endif