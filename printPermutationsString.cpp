/*

Problem Link: https://www.codingninjas.com/studio/problems/day-13-print-permutations-string_8230703?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 

void f(string &s, int index, vector<string> &ans)
{
    if (index == s.length())
    {
        ans.push_back(s);
        return;
    }

    for (int i = index; i < s.length(); i++) {
      swap(s[i], s[index]);
      f(s, index + 1, ans);
      swap(s[i], s[index]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    f(s, 0, ans);
    return ans;
}
