/*

Problem Link: https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
#define ll long long
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

    ll curr=0ll;
    ll maxi=0ll;
    for (int i=0; i<n; ++i) {
        curr+=arr[i];
        maxi=max(maxi,curr);
        if (curr<0) curr=0;
    }

    if (maxi<0) maxi=0;
    return maxi;

}
