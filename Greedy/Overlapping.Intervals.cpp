#include <iostream>
#include <vector>
using namespace std;

struct Interval
{
    int start, end;
};

bool comp(Interval a, Interval b)
{
    return a.start < b.start;
}

vector<Interval> merge(vector<Interval> &intervals)
{
    vector<Interval> result;
    int n = intervals.size();

    if (intervals.empty())
        return result;

    // Sort by the start time
    sort(intervals.begin(), intervals.end(), comp);

    // make current Interval
    Interval curr = intervals[0];

    for (int i = 1; i < n; i++)
    {
        if (intervals[i].start <= curr.end)
        {
            // Merge the intervals
            curr.end = max(curr.end, intervals[i].end);
        }
        else
        {
            result.push_back(curr);
            curr = intervals[i];
        }
    }

    result.push_back(curr);

    return result;
}