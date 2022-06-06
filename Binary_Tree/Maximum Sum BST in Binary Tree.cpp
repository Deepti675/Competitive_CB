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
class NodeValue{
public:
    int maxNode,minNode,maxSize;
    NodeValue(int minNode,int maxNode,int maxSize)
    {
       this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};
class Solution {
public:
    int maxSum;
    NodeValue helper(TreeNode* root)
    {
        if(!root)
            return NodeValue(INT_MAX,INT_MIN,0);
        
        auto left=helper(root->left);
        auto right=helper(root->right);
        
        if(left.maxNode< root->val && root->val< right.minNode)
        {
            maxSum = max(maxSum, left.maxSize + right.maxSize + root->val) ;
            return NodeValue(min(root->val,left.minNode),max(root->val,right.maxNode),left.maxSize+right.maxSize+root->val);
        }
        return NodeValue(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
    }
public:
    
    int maxSumBST(TreeNode* root) {
        maxSum=0;
        helper(root).maxSize;
        return maxSum;
    }
};
