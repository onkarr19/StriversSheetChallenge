/*

Problem Link: https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int, int>m;    
    for(auto x: arr) ++m[x];

    int n = arr.size();
    int k = floor(n/3);    
    vector<int>res;

    for(auto x: m){        
        if(x.second > k) res.push_back(x.first);    
    }   
    return res;

}
