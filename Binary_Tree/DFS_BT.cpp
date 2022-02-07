#include <bits/stdc++.h>
//DFS of Binary Tree 
using namespace std;
struct Node{
    int data;
    struct Node *left,*right;
    
};
void PostOrder(Node* root){
    if(root==NULL)
    return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
    
}
void PreOrder(Node* root){
    if(root==NULL)
    return;
    
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
    
    
}
void InOrder(Node* root){
     if(root==NULL)
    return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

Node *newNode(int data){
    Node *temp=new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    
    Node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    cout<<"Pre Order Treversal :"<<endl;
    PreOrder(root);
    cout<<"\nPost Order Treversal :"<<endl;
    PostOrder(root);
    cout<<"\nIn Order Treversal :"<<endl;
    InOrder(root);
    return 0;
}
