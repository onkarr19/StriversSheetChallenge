/*

Problem Link: https://www.codingninjas.com/studio/problems/postorder-traversal_8230858?challengeSlug=striver-sde-challenge
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
    f(root->left, res);
    f(root->right, res);
    res.push_back(root->data);

}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>res;
    f(root, res);
    return res;
}
