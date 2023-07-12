/*

Problem Link: https://www.codingninjas.com/studio/problems/convert-sorted-array-to-bst_8230836?challengeSlug=striver-sde-challenge

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

TreeNode<int>* f(vector<int>& nums,int low, int high) {
    
    if (low>high) return NULL;
    int mid = low + (high-low)/2;
    TreeNode<int>* root=new TreeNode<int>(nums[mid]);

    root->left = f(nums,low,mid-1);
    root->right = f(nums,mid+1,high);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return f(arr,0,n-1);
}
