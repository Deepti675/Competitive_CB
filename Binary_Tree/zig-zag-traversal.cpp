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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //using Queue 
        vector<vector<int>>res;
        if(root==NULL)
            return res;
        queue<TreeNode*>nodeQ;
        nodeQ.push(root);
        bool flag=true;
        while(!nodeQ.empty())
        {
            int s=nodeQ.size();
            vector<int>row(s);
            for(int i=0;i<s;i++)
            {
                TreeNode* n1=nodeQ.front();
                nodeQ.pop();
                int index=(flag)?i:(s-1-i);
                row[index]=n1->val;
                if(n1->left)
                    nodeQ.push(n1->left);
                if(n1->right)
                    nodeQ.push(n1->right);
            }
            flag=!flag;
            res.push_back(row);
        }
        return res;
    }
};
