/*

Problem Link: https://www.codingninjas.com/studio/problems/check-permutation_8230834?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    int n1 = str1.size(), n2 = str2.size();
    // if (n1!=n2) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1==str2;
}
