/*

Problem Link: https://www.codingninjas.com/studio/problems/diameter-of-binary-tree_8230762?challengeSlug=striver-sde-challenge

*/

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

int height(TreeNode<int> *node, int & diameter) {
    if (!node) return 0;

    int l = height(node->left,diameter);
    int r = height(node->right,diameter);
    diameter = max(diameter, l+r);
    return 1+max(l,r);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int diameter=0;
    height(root,diameter);
    return diameter;
}

