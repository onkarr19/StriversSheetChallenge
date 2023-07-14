/*

Problem Link: https://www.codingninjas.com/studio/problems/preorder-traversal_8230856?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void f(TreeNode* root, vector<int>&res) {
    if (!root) return;
    res.push_back(root->data);
    f(root->left, res);
    f(root->right, res);

}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>res;
    f(root, res);
    return res;
}