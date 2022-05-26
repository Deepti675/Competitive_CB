/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
       int m=0;
        hight(root,m);
        return m;
    }
    
    int hight(TreeNode* root,int &m)
    {
        if(root==NULL)
            return 0;
        int l=hight(root->left,m);
        int r=hight(root->right,m);
        m=max(m,l+r);
        return 1+max(l,r);
    }
};
