/*

Problem Link: https://www.codingninjas.com/studio/problems/min-heap_8230863?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int> result;
    priority_queue<int, vector<int>, greater<int>> v;

    for (int i=0; i<n; i++) {
        int operation = q[i][0];
        int value = q[i][1];

        if (operation==0) v.push(value);
        else {
            if (!v.empty()) {
                result.push_back(v.top());
                v.pop();
            }
        }
    }

    return result;
}

