/*

Problem Link: https://www.codingninjas.com/studio/problems/lca-of-binary-tree_8230760?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	//    Write your code here
    if (!root) return -1;
    if (root->data==x || root->data==y) return root->data;;

    int l = lowestCommonAncestor(root->left, x, y);
    int r = lowestCommonAncestor(root->right, x, y);

    if (l==-1) return r;
    if (r==-1) return l;
    return root->data;
}
