https://leetcode.com/problems/average-of-levels-in-binary-tree/
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        if(root==NULL)return v;
        double sum=0;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            sum=0;
            int ss=qu.size();
            for(int i=0;i<ss;i++){
                TreeNode* curr;
                curr= qu.front();
                qu.pop();
                sum+=curr->val;
                if(curr->left!=NULL)qu.push(curr->left);
                if(curr->right!=NULL)qu.push(curr->right);
                
            }
            double avg= sum/ss;
            v.push_back(avg);
        }
        return v;
        
    }
};

