/*

Problem Link: https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>
#define ll long long
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	ll cursum = 0, actsum = (ll)(n*(n+1))/2;
	ll sqcursum = 0, sqactsum = ((ll)n * (ll)(n+1)*(ll)(2*n+1))/6;

	for (auto x : arr) { cursum += (ll)x; sqcursum += (ll)x * (ll)x;}

	ll diff = cursum-actsum, sqdiff = sqcursum-sqactsum;
	ll sum = sqdiff / diff;

	int repeating = (sum + diff) / 2;
	int missing = sum - repeating;

	return {missing, repeating};
}

