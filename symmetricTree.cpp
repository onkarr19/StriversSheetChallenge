/*

Problem Link: https://www.codingninjas.com/studio/problems/symmetric-tree_8230686?challengeSlug=striver-sde-challenge

*/

/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool f(BinaryTreeNode<int> *t1, BinaryTreeNode<int> *t2) {
    if (!t1 && !t2) return true;
    if (!t1 || !t2) return false;

    if(t1->data != t2->data) return false;
    return f(t1->left, t2->right) && f(t1->right, t2->left);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    if (!root) return true;
    if (!root->left && !root->right) return false;
    return f(root->left, root->right);
}
