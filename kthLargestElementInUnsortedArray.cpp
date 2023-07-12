/*

Problem Link: https://www.codingninjas.com/studio/problems/kth-largest-element-in-the-unsorted-array_8230740?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
int kthLargest(vector<int>& arr, int size, int K)
{
	// Write your code here.
	priority_queue<int, vector<int>, greater<int>>pq;
	for (auto& i : arr) {
		pq.push(i);
	}
	while (pq.size()>K) pq.pop();
	return pq.top();

}
