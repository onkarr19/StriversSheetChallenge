/*

Problem Link: https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_8230757?challengeSlug=striver-sde-challenge

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

void f(TreeNode<int>* root, vector<int>& ans, int i){
    if (!root) return;
    if (i==ans.size()) ans.push_back(root->data);

    f(root->left, ans, i+1);
    f(root->right, ans, i+1);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    f(root, ans, 0);
    return ans;
}
