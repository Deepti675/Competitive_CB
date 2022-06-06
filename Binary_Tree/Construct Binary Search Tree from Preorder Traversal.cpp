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
    TreeNode* bstFromPreorder(vector<int>& A) {
        int i=0;
        return fun(A,i,INT_MAX);
    }
    TreeNode* fun(vector<int>&A,int& i,int U_bound)
    {
        if(i==A.size()||A[i]>U_bound)return NULL;
        TreeNode* root=new TreeNode(A[i++]);
        root->left=fun(A,i,root->val);
        root->right=fun(A,i,U_bound);
        return root;
    }
};
