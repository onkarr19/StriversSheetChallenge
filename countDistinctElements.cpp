/*

Problem Link: https://www.codingninjas.com/studio/problems/count-distinct-element-in-every-k-size-window_8230749?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    vector<int> res;
    unordered_map<int,int>mp;
    for (int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        if (i>=k-1) {
            res.push_back(mp.size());
            if(--mp[arr[i-k+1]]==0) mp.erase(arr[i-k+1]);
        }
    }
    return res;
	
}

