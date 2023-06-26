/*

Problem Link: https://www.codingninjas.com/studio/problems/kth-element-of-two-sorted-arrays_8230824?challengeSlug=striver-sde-challenge

*/

#include <limits.h>
int f(vector<int>&a, int n, int t){
    int l=0, h=n-1;
    while(l<=h){
        int mid = l+(h-l)/2;

        if(a[mid]<=t) l = mid+1;
        else h = mid-1;
    }

    return l;
}
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    int low = min(row1[0],row2[0]);
    int high = max(row1[m-1],row2[n-1]);

    while(low<=high){
        int mid = low+(high-low)/2;
        int cnt1 = f(row1,m,mid);
        int cnt2 = f(row2,n,mid);

        if((cnt1+cnt2)<k) low = mid+1;
        else high = mid-1;
    }
    return low;
}
