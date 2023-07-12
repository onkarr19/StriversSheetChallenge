/*

Problem Link: https://www.codingninjas.com/studio/problems/construct-binary-tree-from-inorder-and-preorder-traversal_8230759?challengeSlug=striver-sde-challenge

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

TreeNode<int> *f(vector<int> &inorder,int iL,int iH, vector<int> &preorder,int pL,int pH,unordered_map<int,int>&mp)
{
    if(iL>iH || pL>pH)
    return NULL;
    TreeNode<int> * root = new TreeNode<int>(preorder[pL]);
    int currInd=mp[root->data];
    int inorderLInd=currInd-iL;

    root->left = f(inorder,iL,currInd-1,preorder,pL+1,pL+inorderLInd,mp);
    root->right = f(inorder,currInd+1,iH,preorder,pL+inorderLInd+1,pH,mp);
    return root;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    unordered_map<int,int>mp;
    int n=inorder.size();
    for(int i=0;i<n;i++) mp[inorder[i]]=i;
    return f(inorder,0,n-1,preorder,0,n-1,mp);
}
