/*

Problem Link: https://www.codingninjas.com/studio/problems/ceil-from-bst_8230754?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

void solve(BinaryTreeNode<int>* root,int &ans,int X){   
    if (root==NULL) return;
    if (root->data==X) { ans=root->data; return;}
    else if(root->data < X) solve(root->right,ans,X);
    else if (root->data > X) {
        ans = min(ans, root->data);
        solve(root->left, ans, X);
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=INT_MAX;
    solve(node,ans,x);
    if (ans==INT_MAX) return -1;
    return ans;
}
