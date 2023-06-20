/*

Problem Link: https://www.codingninjas.com/codestudio/problems/count-subarrays-with-given-xor_8230830?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int> m;
    m[0]=1;
    int c=0, y=0;

    for(int i=0; i<arr.size(); ++i){
        y^=arr[i];
        if (m.find(y^x)==m.end()) m[y]++;
        else {
            c+=m[y^x];
            m[y]++;
        }

    }
    
    return c;
}
