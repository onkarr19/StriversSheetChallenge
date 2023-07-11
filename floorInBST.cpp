/*

Problem Link: https://www.codingninjas.com/studio/problems/floor-in-bst_8230753?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void solve(TreeNode<int>* root,int &ans,int X){
    if (!root) return;
    if (root->val==X) { ans=root->val; return;}

    if (root->val >X) solve(root->left,ans,X);
    else if (root->val < X) {
        ans=max(ans,root->val);        
        solve(root->right,ans,X);    
    }
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int ans=INT_MIN;    
    solve(root,ans,X);    
    return ans;
}
