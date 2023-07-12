/*

Problem Link: https://www.codingninjas.com/studio/problems/is-height-balanced-binary-tree_8230771?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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

*************************************************************/

int height(BinaryTreeNode<int>* root){
    if (root == NULL) return 0;
    return 1 + max(height(root->left),height(root->right));
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    if (!root) return true;
    if (isBalancedBT(root->left) 
        && isBalancedBT(root->right) 
        && abs(height(root->left) - height(root->right)) <=1) return true;

    
    return false;
}
