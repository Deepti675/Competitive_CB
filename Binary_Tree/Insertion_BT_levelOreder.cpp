#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* CreateNode(int data){
    Node* newNode= new Node();
    if(!newNode){
        cout<<"Memory error "<<endl;
        return NULL;
        
    }
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode; 
}
Node* InsertNode(Node* root,int data){
    if(root==NULL){
        root=CreateNode(data);
        return root;
    }
    queue<Node*>q;
    
    
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left!=NULL)
        q.push(temp->left);
        else
        {
            temp->left=CreateNode(data);
            return root;
        }
        if(temp->right!=NULL)
        q.push(temp->right);
        else
        {
            temp->right=CreateNode(data);
            return root;
        }
        
        
    }
    
}

void inorder(Node* temp){
    if(temp==NULL)
    return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

int main(){
    Node* root=CreateNode(38);
    root->left=CreateNode(18);
    root->left->left=CreateNode(7);
    root->right=CreateNode(9);
    root->right->right=CreateNode(8);
    cout<<"Inordere traversal before insertion: ";
    inorder(root);
    cout<<"\n";
    int num_ins;
    //insert the more than one data
    cin>>num_ins;
    for(int i=0;i<num_ins;i++)
    {
        int key;
        cin>>key;
       root=InsertNode(root,key);
    }
    
   // root=InsertNode(root,key);
    cout<<"inorder traversal after key insertion:";
    inorder(root);
    cout<<"\n";
    return 0;
}















