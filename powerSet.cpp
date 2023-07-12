/*

Problem Link: https://www.codingninjas.com/studio/problems/power-set_8230797?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
void f(vector<int>&v, vector<vector<int>>&res,  vector<int>&current, int i) {
    if (i==v.size()) {
        res.push_back(current);
    } else {
      current.push_back(v[i]);
      f(v, res, current, i + 1);
      current.pop_back();
      f(v, res, current, i + 1);
    }
}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>> res;
    vector<int>current;
    f(v, res,current,0);
    return res;
}
