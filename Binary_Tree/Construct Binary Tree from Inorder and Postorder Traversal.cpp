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
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
    if(in.size()!=post.size())
        return NULL;
    map<int,int>mpp;
    for(int i=0;i<in.size();i++)
    {
        mpp[in[i]]=i;
    }
        return BPI(in,0,in.size()-1,post,0,post.size()-1,mpp);
    }
    TreeNode* BPI(vector<int>&in,int is,int ie,vector<int>&post,int ps,int pe,map<int,int>&mpp)
    {
        if(ps>pe||is>ie)return NULL;
        TreeNode* root=new TreeNode(post[pe]);
        int inroot=mpp[post[pe]];
        int numleft=inroot-is;
        root->left=BPI(in,is,inroot-1,post,ps,ps+numleft-1,mpp);
        root->right=BPI(in,inroot+1,ie,post,ps+numleft,pe-1,mpp);
        return root;
    }
 
};
