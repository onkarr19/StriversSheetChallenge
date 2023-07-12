/*

Problem Link: https://www.codingninjas.com/studio/problems/k-most-frequent-elements_8230853?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    map<int,int>mp;
    for (auto &i : arr) ++mp[i];
    
    priority_queue<pair<int,int>>pq;
    for (auto &i : mp) pq.push({i.second, i.first});

    vector<int>res;
    for (int i=0; i<k; ++i) {
        res.push_back(pq.top().second); pq.pop();
    }

    sort(res.begin(), res.end());
    return res;
}
