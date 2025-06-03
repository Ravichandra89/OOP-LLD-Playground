#ifndef CACHING_RANDOM_STRATEGY_HPP
#define CACHING_RANDOM_STRATEGY_HPP

#include "ICachingSystem.hpp"
#include <iostream>
#include <string>
#include <unordered_map>
#include <random>

using namespace std;

class RandomStrategy : public ICacheStrategy {
        vector<string> key_;
        unordered_map<string, size_t> map;
        mt19937 rng_{random_device{}()};

    public : 
        void onGet(const string & ) override {

        }

        void onPut(const string & key) override {
            auto it = map.find(key);
            if (it != map.end()) {
                return;
            }

            key_.push_back(key);
            map[key] = key_.size() - 1;
        }

        void onRemove(const string & key) override {
            auto it = map.find(key);
            if (it == map.end()) return ;

            size_t idx = it->second;
            size_t last = key_.size() - 1;
            if (idx != last) {
                swap(key_[idx], key_[last]);
                map[key_[idx]] = idx;
            }

            key_.pop_back();
            map.erase(it);
        }

        string evictKey() override {
            if (key_.empty()) return "";
            uniform_int_distribution<size_t> dist(0, key_.size() - 1);
            size_t idx = dist(rng_);
            return key_[idx];
        }
};

#endif