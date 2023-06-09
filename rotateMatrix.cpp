/*

Problem Link: https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge

*/


#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int l=0,r=m-1,top=0,btm=n-1;

    while (top<btm && l<r) {

        int temp = mat[top][l];
        for (int i=l+1; i<=r; ++i) {
            int k = mat[top][i];
            mat[top][i] = temp;
            temp = k;
        }

        ++top;

        for (int i=top; i<=btm; ++i) {
            int k = mat[i][r];
            mat[i][r] = temp;
            temp = k;
        }

        --r;

        for (int i=r; i>=l; --i) {
            int k = mat[btm][i];
            mat[btm][i] = temp;
            temp = k;
        }

        --btm;

        for (int i=btm; i>=top; --i) {
            int k = mat[i][l];
            mat[i][l] = temp;
            temp = k;
        }

        ++l;
        mat[top-1][l-1] = temp;
    }

}
