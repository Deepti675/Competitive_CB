/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool getv(TreeNode* root,vector<int>&arr,int B)
 {
     if(!root)
     return false;
     arr.push_back(root->val);
     if(root->val==B)
     return true;
     
     if(getv(root->left,arr,B)||getv(root->right,arr,B))
     return true;
     arr.pop_back();
     return false;
 }
vector<int> Solution::solve(TreeNode* root, int B) {
    vector<int>arr;
    if(root==NULL)
       return arr;
    getv(root,arr,B);
    return arr;   
}
