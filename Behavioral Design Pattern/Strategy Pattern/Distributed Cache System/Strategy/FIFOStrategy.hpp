#ifndef FIFO_STRATEGY_HPP
#define FIFO_STRATEGY_HPP

#include "ICachingSystem.hpp"
#include <list>
#include <unordered_map>
#include <string>

using namespace std;

class FIFOStrategy : public ICacheStrategy {
        list<string> queue;
        unordered_map<string, list<string>::iterator> map;
    
    public : 
        void onGet(const string & key) override {

        }

        void onPut(const string & key) override {
            auto it = map.find(key);
            if (it != map.end()) {
                return ; // If Key Already Cached
            }
            queue.push_back(key);
            map[key] = prev(queue.end());
        }

        void onRemove(const string & key) override {
            auto it = map.find(key);
            if (it != map.end()) {
                queue.erase(it->second);
                map.erase(it);
            }
        }

        string evictKey() override {
            if (queue.empty()) return "";
            return queue.front();
        }
};

#endif