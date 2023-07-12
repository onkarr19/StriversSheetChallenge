/*

Problem Link: https://www.codingninjas.com/studio/problems/subsets-ii_8230855?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
void rec(int ind, int n, vector<int>&arr, vector<vector<int>>& ans, vector<int>&ds){
    ans.push_back(ds);
    
    for(int i = ind; i < n; i++){
        if(i != ind && arr[i] == arr[i - 1]){
            continue;
        }
        
        ds.push_back(arr[i]);
        rec(i + 1, n, arr, ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> ds;
    
    sort(arr.begin(), arr.end());
    rec(0, n, arr, ans, ds);
    
    return ans;
}
