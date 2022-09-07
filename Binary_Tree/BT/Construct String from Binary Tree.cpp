https://leetcode.com/problems/construct-string-from-binary-tree/
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
    string tree2str(TreeNode* root) {
        if(root==NULL)
        return "";
        string st;
        
        st=to_string(root->val);
        if(root->left)
        {
            st+="("+tree2str(root->left)+")";
        }
        else if(root->right)
        {
            st+="()";
        }
        if(root->right)
        {
            st+="("+tree2str(root->right)+")";
        }
        return st;
    }
};
