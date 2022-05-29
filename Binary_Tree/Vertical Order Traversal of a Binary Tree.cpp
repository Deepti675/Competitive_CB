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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>n;
        queue<pair<TreeNode*,pair<int,int>>>t;
        t.push({root,{0,0}});
        while(!t.empty())
        {
            auto p=t.front();
            t.pop();
            TreeNode* n1=p.first;
            int x=p.second.first, y=p.second.second;
             n[x][y].insert(n1->val);
            if(n1->left)
                t.push({n1->left,{x-1,y+1}});
             if(n1->right)
                t.push({n1->right,{x+1,y+1}});
        }
        vector<vector<int>>a;
        for(auto p:n)
        {
            vector<int>c;
            for(auto q:p.second)
            {
                c.insert(c.end(),q.second.begin(),q.second.end());
            }
            a.push_back(c);
        }
        return a;
    }
};
