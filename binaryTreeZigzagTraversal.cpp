/*

Problem Link: https://www.codingninjas.com/studio/problems/binary-tree-zigzag-traversal_8230796?challengeSlug=striver-sde-challenge

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int>res;
    if (!root) return res;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);

    bool f = false;

    while (!q.empty()) {
        int n = q.size();
        vector<int>temp;
        for (int i=0; i<n; ++i) {
            BinaryTreeNode<int>* node = q.front(); q.pop();
            temp.push_back(node->data);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        if (f) reverse(temp.begin(), temp.end());
        for (auto &i : temp) res.push_back(i);
        f = !f;
    }

    return res;
}

