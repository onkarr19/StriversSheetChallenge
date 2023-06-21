/*

Problem Link: https://www.codingninjas.com/studio/problems/longest-substring-without-repeating-characters_8230684?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int> mp(26,0);
    int j=0;
    int res= 1;
    for(int i=0; i<input.size(); i++) {
        mp[input[i]-'a']++;
 
        while(mp[input[i]-'a']>1) {
           mp[input[j]-'a']--;
           j++;
        }

        res = max(res,i-j+1);
    }
 
    return res;
}
