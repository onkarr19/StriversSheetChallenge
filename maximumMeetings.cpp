/*

Problem Link: https://www.codingninjas.com/studio/problems/maximum-meetings_8230795?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,pair<int,int>>> ans;
    
    for(int i=0;i<start.size();i++){
        ans.push_back({finish[i], {i+1, start[i]}});
    }
    sort(ans.begin(),ans.end());

    int n=ans.size();
    int e = -1;
    vector<int> res;

    for(auto val : ans) {
        if(val.second.second>e-1) {
            res.push_back(val.second.first);
            e = val.first+1;
        }
    }
    return res;
}
