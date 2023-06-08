/*

Problem Lnk: https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());

    int n = intervals.size();

    for (auto & i : intervals) {
        if (res.size()==0) res.push_back(i);
        else if (i[0]<=res.back()[1]) res.back()[1] = max(res.back()[1], i[1]);
        else res.push_back(i);
    }
    return res;
}

