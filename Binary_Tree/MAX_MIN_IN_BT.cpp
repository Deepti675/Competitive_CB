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
int MAX_IN_BT(Node* root){
    if(root==NULL)
    return INT_MIN;
    int res=root->data;
    int lres=MAX_IN_BT(root->left);
    int rres=MAX_IN_BT(root->right);
    if(lres>res)
    res=lres;
    if(rres>res)
    res=rres;
return res;    
}
int MIN_IN_BT(Node* root){
       if(root==NULL)
    return INT_MAX;
    int res=root->data;
    int lres=MAX_IN_BT(root->left);
    int rres=MAX_IN_BT(root->right);
    if(lres<res)
    res=lres;
    if(rres<res)
    res=rres;
return res;    
}
int main()
{
    
    Node *root=newNode(1);
    root->left=newNode(20);
    root->right=newNode(31);
    root->left->left=newNode(8);
    root->left->right=newNode(91);
    cout<<"MAX in The Tree:"<<MAX_IN_BT(root);
    cout<<"\nMIN in the Tree:"<<MIN_IN_BT(root);
    return 0;
}
