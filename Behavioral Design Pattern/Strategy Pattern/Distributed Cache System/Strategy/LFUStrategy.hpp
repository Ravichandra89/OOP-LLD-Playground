#ifndef LEAST_FREQUENTLY_USED_STRATEGY_HPP
#define LEAST_FREQUENTLY_USED_STRATEGY_HPP

#include "ICachingSystem.hpp"
#include <iostream>
#include <string>
#include <list>
#include <unordered_map>
#include <map>

using namespace std;

class LFUStrategy : public ICacheStrategy
{
    struct KeyStructure
    {
        int freq;
        list<string>::iterator it;
    };

    unordered_map<string, KeyStructure> mp;
    map<int, list<string>> freq_;
    int mini = 0;

public:
    void onGet(const string &key) override
    {
        auto it = mp.find(key);
        if (it == mp.end())
            return;

        int oldFreq = it->second.freq;
        auto listIt = it->second.it;
        freq_[oldFreq].erase(listIt);

        if (freq_[oldFreq].empty())
        {
            freq_.erase(oldFreq);
            if (mini == oldFreq)
                mini++;
        }

        int newFreq = oldFreq + 1;
        freq_[newFreq].push_back(key);
        auto newListIt = prev(freq_[newFreq].end());
        it->second.freq = newFreq;
        it->second.it = newListIt;
    }

    void onPut(const string &key) override
    {
        if (mp.count(key))
        {
            onGet(key);
            return;
        }

        int freq = 1;
        freq_[freq].push_back(key);
        auto listIt = prev(freq_[freq].end());
        mp[key] = {freq, listIt};
        mini = 1;
    }

    void onRemove(const string &key) override
    {
        auto it = mp.find(key);
        if (it == mp.end())
            return;

        int freq = it->second.freq;
        auto listIt = it->second.it;

        freq_[freq].erase(listIt);
        if (freq_[freq].empty())
        {
            freq_.erase(freq);
            if (mini == freq)
            {
                mini = freq_.empty() ? 0 : freq_.begin()->first;
            }
        }

        mp.erase(it);
    }

    string evictKey() override
    {
        if (freq_.empty())
            return "";
        auto &leastList = freq_.begin()->second;
        return leastList.front();
    }
};

#endif // LEAST_FREQUENTLY_USED_STRATEGY_HPP
