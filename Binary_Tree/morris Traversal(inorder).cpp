/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int>in;
        Node* curr=root;
        while(curr!=NULL)
        {
            if(curr->left==NULL)
            {
                in.push_back(curr->data);
                curr=curr->right;
            }
            else
            {
                Node* prev=curr->left;
                while(prev->right&&prev->right!=curr)
                {
                    prev=prev->right;
                }
                if(prev->right==NULL)
                {
                    prev->right=curr;
                    curr=curr->left;
                }
                else
                {
                    prev->right=NULL;
                    ;in.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }
        return in;
    }
};
