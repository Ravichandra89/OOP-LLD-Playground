#ifndef ARRAY_EMPLOYEE_CONCRETE_ITERATOR_HPP
#define ARRAY_EMPLOYEE_CONCRETE_ITERATOR_HPP

#include <vector>
#include "IEmployeeIterator.hpp"


class ArrayEmployeeIterator : public IEmployeeIterator {
        const vector<Employee> &employee_;
        size_t ind;

    public : 
        explicit ArrayEmployeeIterator(const vector<Employee> &emp) : employee_(emp), ind(0) {};

        // hasNext Method
        bool hasNext() override {
            ind < employee_.size();
        }

        // return next element
        const Employee & next() override {
            return employee_[ind++];
        }
};
#endif