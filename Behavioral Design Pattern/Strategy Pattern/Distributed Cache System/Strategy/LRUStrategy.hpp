#ifndef LEAST_RECENT_USED_STRATEGY_HPP
#define LEAST_RECENT_USED_STRATEGY_HPP

#include "ICachingSystem.hpp"
#include <string>
#include <unordered_map>
#include <list>

using namespace std;

class LRUStrategy : public ICacheStrategy {
        list<string> useList_;
        unordered_map<string, list<string>::iterator> mp;
    
    public : 
        void onGet(const string & key) override {
            auto it = mp.find(key);
            if (it != mp.end()) {
                useList_.erase(it->second);
                useList_.push_front(key);
                mp[key] = useList_.begin();
            }
        }

        void onPut(const string & key) override {
            auto it = mp.find(key);

            if (it != mp.end()) {
                // Already Exists -> Update Recency
                
                useList_.erase(it->second);
                useList_.push_front(key);
                mp[key] = useList_.begin();
            } else {
                useList_.push_front(key); // New key 
                mp[key] = useList_.begin();
            }
        }

        void onRemove(const string & key) override {
            auto it = mp.find(key);
            if (it != mp.end()) {
                useList_.erase(it->second);
                mp.erase(it);
            }
        }

        string evictKey() override {
            // Evict the least recently 
            if (useList_.empty()) {
                return "";
            }
            return useList_.back();
        }
};

#endif