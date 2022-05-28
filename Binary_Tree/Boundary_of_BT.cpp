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
    bool isLeaf(TreeNode* root){
       if(root->left || root->right){
           return false;
       }
        return true;
    }

    void LeftBound(TreeNode* root,vector<int>&res)
    {
        TreeNode* n1=root->left;
        while(n1)
        {
            if(!isLeaf(n1))
                res.push_back(n1->val);
            if(n1->left)
                n1=n1->left;
            else
                n1=n1->right;
        }
    }
    void RightBound(TreeNode* root,vector<int>&res)
    {
        TreeNode* n1=root->right;
        vector<int>t;
        while(n1)
        {
            if(!isLeaf(n1))
                t.push_back(n1->val);
            if(n1->right)
                n1=n1->right;
            else
                n1=n1->left;
            
        }
        for(int i=t.size()-1;i>=0;--i)
        {
            res.push_back(t[i]);
        }
    }
    void Leaf(TreeNode* root,vector<int>&res)
    {
        if(isLeaf(root))
        {
            res.push_back(root->val);
            return;
        }
        if(root->left)
            Leaf(root->left,res);
        if(root->right)
            Leaf(root->right,res);
    }
    vector<int> boundaryOfBinaryTree(TreeNode* root) {
        vector<int>res;
        if(!root)return res;
        if(!isLeaf(root))res.push_back(root->val);
        LeftBound(root,res);
        Leaf(root,res);
        RightBound(root,res);
        return res;
    }
};
