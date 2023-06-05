/*

Problem Link: https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge

*/


#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &mat)
{
	// Write your code here.
	int n = mat.size(), m = mat[0].size();
	vector<int>row(n,0);
	vector<int>col(m,0);

	for(int i=0; i<n; ++i) {
		for (int j=0; j<m; ++j) {
			if (mat[i][j]==0) {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	for (int i=0; i<n; ++i) {
		for (int j=0; j<m; ++j) {
			if (row[i] || col[j]) mat[i][j]=0;
		}
	}
}