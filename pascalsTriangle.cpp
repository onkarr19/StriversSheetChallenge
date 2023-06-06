/*

Problem Link: https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge&leftPanelTab=1

*/

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> output(n);
    for(int i=0; i<n; i++){
        output[i].resize(i+1, 1);
        for(int j=1; j<i; j++){
            output[i][j] = output[i-1][j-1] + output[i-1][j];
        }
    }
  return output;
}
