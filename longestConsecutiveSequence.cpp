/*

Problem Link: https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> st(arr.begin(), arr.end());
    int res = 0;

    for(int i=0; i<n; ++i) {
        if(st.find(arr[i]-1) == st.end()) {
            int length = 1;
            for(int j=1; st.find(arr[i]+j) != st.end(); j++, length++);
            res = max(length, res);
        }
    }

    return res;
}
