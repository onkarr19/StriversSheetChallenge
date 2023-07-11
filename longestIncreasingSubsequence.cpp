/*

Problem Link: https://www.codingninjas.com/studio/problems/longest-increasing-subsequence_8230689?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>
int longestIncreasingSubsequence(int arr[], int n)
{
    // Write Your Code here
    vector<int>dp;
    int ans=1;
    dp.push_back(arr[0]);
    for (int i=1; i<n; i++) {
        if (arr[i]>dp.back()) dp.push_back(arr[i]);
        else {
            int j = lower_bound(dp.begin(),dp.end(),arr[i]) - dp.begin();
            dp[j] = arr[i];
        }
    }
    return dp.size();
}

