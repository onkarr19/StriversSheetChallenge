/*

Problem Link: https://www.codingninjas.com/studio/problems/pair-sum-in-bst_8230756?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/

bool f(BinaryTreeNode<int> *root,unordered_set<int> &st,int &k) {
    if (root==NULL) return false;
    if (f(root->left,st,k)) return true;
 
    if (st.find(k- root->data)!=st.end()) return true;

    st.insert(root->data);
    if (f(root->right,st,k)) return true;
    return false;
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    unordered_set<int> st;
    return f(root,st,k);
}
