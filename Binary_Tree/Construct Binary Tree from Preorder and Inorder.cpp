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
     TreeNode* buildTree(vector<int>&pre,int prestart,int preend,
                 vector<int>&in,int instart,int inend,map<int,int>&mpp)
    {
        if(prestart>preend||instart>inend)return NULL;
        TreeNode* root=new TreeNode(pre[prestart]);
        int inroot=mpp[root->val];
        int numleft=inroot-instart;
        root->left=buildTree(pre,prestart+1,prestart+numleft,in,instart,inroot-1,mpp);
        root->right=buildTree(pre,prestart+numleft+1,preend,in,inroot+1,inend,mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        map<int,int>mpp;
        
        int n=pre.size()-1;
        int k=in.size()-1;
        for(int i=0;i<=k;i++)
        {
            mpp[in[i]]=i;
        }
        TreeNode* root=buildTree(pre,0,n,in,0,k,mpp); 
        return root;
    }
   
};
