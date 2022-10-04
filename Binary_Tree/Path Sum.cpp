https://leetcode.com/problems/path-sum/
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
    bool f(TreeNode* node, int t){
        if(!node)
            return false;
        if(!node->left && !node->right)
            return node->val==t;
        return (f(node->left,t- node->val) || f(node->right,t-node->val));
    }
    bool hasPathSum(TreeNode* root, int t) {
        //dfs
        return f(root,t);
        
        
       
         
    }
};
