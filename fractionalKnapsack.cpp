/*

Problem Link: https://www.codingninjas.com/studio/problems/fractional-knapsack_8230767?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(), items.end(), 
        [](pair<int, int> &a, pair<int, int> &b) {
            return ((double) a.second / a.first) > ((double) b.second / b.first);
        }
    );

    double maxi = 0;
    int curr = 0;
    for (auto p: items) {
        if (p.first + curr <= w) {
            curr += p.first;
            maxi += p.second;
        } else {
            maxi += double ((double) p.second * (w-curr)) / p.first;
            break;
        }
    }
    return maxi;
}
