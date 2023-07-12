/*

Problem Link: https://www.codingninjas.com/studio/problems/merge-k-sorted-arrays_8230770?challengeSlug=striver-sde-challenge

*/
#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<int,vector<int>, greater<int>>pq;
    for (auto &arr : kArrays) {
        for (auto &i : arr) pq.push(i);
    }

    vector<int>res;
    while (!pq.empty()) {
        res.push_back(pq.top()); pq.pop();
    }

    return res;
}

