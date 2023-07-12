/*

Problem Link: https://www.codingninjas.com/studio/problems/kth-largest-element-in-a-stream_8230728?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
class Kthlargest {
    priority_queue<int, vector<int>, greater<int>>pq;
    int k;
public:
    Kthlargest(int k, vector<int> &arr) {
       // Write your code here.
       this->k=k;
       for (auto &i : arr) {
           add(i);
       }
    }

    void add(int num) {
        // Write your code here.
        pq.push(num);
        if (pq.size()>k) pq.pop();
    }

    int getKthLargest() {
       // Write your code here.
       return pq.top();
    }

};
