/*

Problem Link: https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   int n=arr.size();
   vector<vector<int>>ans;
   sort(arr.begin(), arr.end());
   for(int i=0;i<n;i++) {
 
      if (lower_bound(arr.begin() + i + 1, arr.end(), s - arr[i]) !=upper_bound(arr.begin() + i + 1, arr.end(), s - arr[i]))  {
         auto it = lower_bound(arr.begin() + i + 1, arr.end(), s - arr[i]);

         while (it < upper_bound(arr.begin() + i + 1, arr.end(), s - arr[i])) {
            ans.push_back({arr[i],*it});
            it++;
         }
         arr[i]=INT_MAX;
      }
   }
return ans;
}
