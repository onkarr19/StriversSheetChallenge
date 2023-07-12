/*

Problem Link: https://www.codingninjas.com/studio/problems/maximum-consecutive-ones_8230736?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    deque<int>q;
    int j = 0 , cnt = 0;
 
    while(j < n){
 
        q.push_back(arr[j]);
        if(k != 0){
          if (arr[j] == 0) k--;
        } else {
            if(arr[j] == 0){
                while(q.front() != 0) q.pop_front();
                q.pop_front();
            }
        }
        j++;
        int sz =  q.size();
        cnt = max(cnt , sz);
    }
    return cnt;
}

