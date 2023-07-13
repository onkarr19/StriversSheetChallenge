/*

Problem Link: https://www.codingninjas.com/studio/problems/flatten-binary-tree-to-linked-list_8230817?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void f(TreeNode<int>*root,TreeNode<int>*&prev)
{
    if(!root)return;

    f(root->right,prev);
    f(root->left,prev);

    root->right=prev;
    prev=root;
}

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    TreeNode<int>*prev=NULL;
    f(root,prev);
    return prev;
}
