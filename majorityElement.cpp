/*

Problem Link: https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int idx=0, c=0;
	for (int i=0; i<n; ++i) {
		if (c==0) idx=i;
		c += (arr[i]==arr[idx] ? 1 : -1);
	}
	
	c=0;
    for (int i=0; i<n; ++i) {
        if (arr[idx]==arr[i]) c++;
    }
 
    if (c>n/2) return arr[idx];
    else return -1;

}
