/*

Problem Link: https://www.codingninjas.com/studio/problems/tree-traversals_8230775?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

void inorder(BinaryTreeNode<int>* root, vector<int>&res) {
    if (!root) return;
    inorder(root->left, res);
    res.push_back(root->data);
    inorder(root->right, res);
}

void preorder(BinaryTreeNode<int>* root, vector<int>&res) {
    if (!root) return;
    res.push_back(root->data);
    preorder(root->left, res);
    preorder(root->right, res);
}

void postorder(BinaryTreeNode<int>* root, vector<int>&res) {
    if (!root) return;
    postorder(root->left, res);
    postorder(root->right, res);
    res.push_back(root->data);
}


vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<int>in,pre,post;
    inorder(root, in);
    preorder(root, pre);
    postorder(root, post);
    return {in, pre, post};
}
