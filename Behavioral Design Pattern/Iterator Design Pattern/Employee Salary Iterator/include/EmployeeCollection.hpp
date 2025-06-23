#ifndef EMPLOYEE_COLLECTION_HPP
#define EMPLOYEE_COLLECTION_HPP

#include "IEmployeeIterator.hpp"
#include <memory>

using namespace std;

class EmployeeCollection {
    public : 
        virtual ~EmployeeCollection() = default;
        virtual unique_ptr<IEmployeeIterator> createIterator() = 0;
};

#endif