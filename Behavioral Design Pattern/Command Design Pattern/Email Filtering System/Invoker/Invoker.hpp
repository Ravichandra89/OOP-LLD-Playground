#ifndef EMAIL_FILTERING_INVOKER_HPP
#define EMAIL_FILTERING_INVOKER_HPP

#include "../commands/ICommand.hpp"
#include <memory>
#include <vector>

using namespace std;

class Invoker {
    vector<unique_ptr<ICommand>> filters;

    public : 
        // addFilter(), ProcessFilter()
        void addFilter(unique_ptr<ICommand> ft){
            filters.push_back(ft);
        }

        void process(Email& email) {
            for (auto & it : filters) {
                it->execute(email);
            }
        }
};

#endif