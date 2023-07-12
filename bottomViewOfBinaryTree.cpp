/*

Problem Link: https://www.codingninjas.com/studio/problems/bottom-view-of-binary-tree_8230745?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    if (!root)return {};
    
    queue<pair<BinaryTreeNode<int>*,int>> q;
    map<int,int> m;
    q.push({root,0});
    m[0]=root->data;

    while(!q.empty()) {

        auto it=q.front(); q.pop();
        BinaryTreeNode<int> *temp=it.first;
        int distance=it.second;

        if(temp->left) {
            q.push({temp->left,distance-1});
            m[distance-1]=temp->left->data;
        }

        if(temp->right) {
            q.push({temp->right,distance+1});
            m[distance+1]=temp->right->data;
        }
    
    }
    
    vector<int> v;
    for(auto it:m){
        v.push_back(it.second);
    }
    return v;
    
}

