https://leetcode.com/problems/count-good-nodes-in-binary-tree/
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
    int goodNodes(TreeNode* root) {
        int c=0;
        if(!root)return c;
        countGoodNode(root,c,root->val);
        return c;
    }
   void countGoodNode(TreeNode* root,int &c,int maxval){
        if(root==NULL)return;
        if(root->val>=maxval)
        {
            c++;
            maxval=root->val;
        }
       countGoodNode(root->left,c,maxval);
       countGoodNode(root->right,c,maxval);
    }
};
