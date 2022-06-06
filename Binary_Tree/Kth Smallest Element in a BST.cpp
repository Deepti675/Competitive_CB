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
    vector<int> Inorder(TreeNode* root,vector<int>&a)
    {
       if(root==NULL)
           return a;
        Inorder(root->left,a);
        a.push_back(root->val);
        
        Inorder(root->right,a);
       return a; 
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>a;
        int m;
        
        Inorder(root,a);
        for(int i=0;i<a.size();i++)
        {
            if(i==k-1)
              m=a[i];  
        }
        return m;
    }
};
