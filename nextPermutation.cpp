/*

Problem Link: https://www.codingninjas.com/codestudio/problems/next-permutation_8230741?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &v, int n)
{
    //  Write your code here.
    int idx=-1;
    for (int i=n-2; i>=0; --i) 
        if (v[i+1]>v[i]) { idx=i; break;}

    if (idx==-1) {
        reverse(v.begin(), v.end());
    } else {
        for (int i=n-1; i>=0; --i) {
            if (v[i]>v[idx]) { swap(v[i], v[idx]); break;}
        }
        sort(v.begin()+idx+1, v.end());
    }

    return v;
}