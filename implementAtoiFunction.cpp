/*

Problem Link: https://www.codingninjas.com/studio/problems/implement-atoi-function_8230776?challengeSlug=striver-sde-challenge&leftPanelTab=3

*/

#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int n = str.size();
    bool neg = false;
    string res ="";

    for (int i=0; i<n; i++){
        if (str[i]=='-') neg = true;
        if (str[i]<65 && str[i]!='-') res += str[i];
    }
    if (neg) return -stoi(res);
    return stoi(res);
}
