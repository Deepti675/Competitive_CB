https://leetcode.com/problems/add-one-row-to-tree/
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
    TreeNode* addOneRow(TreeNode* root, int val, int d) {
        if(root==NULL)return root;
        if(d==1){
            TreeNode* a= new TreeNode(val);
            a->left=root;
            return a;
        }
        if(d==2){
            root->left=new TreeNode(val,root->left,NULL);
            root->right=new TreeNode(val,NULL,root->right);
            return root;
        }
       addOneRow(root->left,val,d-1);
       addOneRow(root->right,val,d-1);
        return root;
    }
};
