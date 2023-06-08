/*

Problem Link: https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=m-1,j=n-1;
	int k=m+n-1;

	while (j>=0) {
		if (i>=0 && arr1[i]>arr2[j]) arr1[k--] = arr1[i--];
		else arr1[k--] = arr2[j--];
	} 
	
	return arr1;
}
