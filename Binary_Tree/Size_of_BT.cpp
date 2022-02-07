#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    
};

Node *newNode(int data){
    Node *temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int SizeOfTree(Node* root){
    if(root==NULL)
    return 0;
    else
    return(SizeOfTree(root->left) + 1 + SizeOfTree(root->right));
}
int main()
{
    
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"Size of The Tree:"<<SizeOfTree(root);
    
    return 0;
}
