/*

Problem Link: https://www.codingninjas.com/studio/problems/top-view-of-binary-tree_8230721?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int>v;
    if(!root) return v;

    map<int,int>m;
    queue<pair<TreeNode<int> *,int>>q;

    q.push({root,0});
    while(!q.empty()){
        
        TreeNode<int> *t = q.front().first;
        int h = q.front().second; q.pop();

        if(!m[h])   m[h] = t->val;
        if(t->left)     q.push({t->left,h-1});
        if(t->right)    q.push({t->right,h+1});
    }

    for(auto x:m) v.push_back(x.second);
    return v;
}
