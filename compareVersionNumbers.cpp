/*

Problem Link: https://www.codingninjas.com/studio/problems/compare-version-numbers_8230793?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
int compareVersions(string a, string b) 
{
    // Write your code here
    int i=0, j=0;
    int an = a.size(), bn = b.size();
    while (i<an || j<bn) {
        long x=0, y=0;
        while (i<an && a[i] != '.') x = x*10 + (a[i++]-'0');
        while (j<bn && b[j] != '.') y = y*10 + (b[j++]-'0');
        
        if (x>y)return 1;
        else if (x<y)return -1;
        i++;
        j++;
 
    }
    return 0;
}
