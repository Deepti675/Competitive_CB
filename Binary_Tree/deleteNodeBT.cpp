#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    struct Node *left,*right;
    
};
struct Node* newNode(int key){
    struct Node* temp=new Node;
    temp->key=key;
    temp->left=temp->right=NULL;
    return temp;
    
}
void inorder(struct Node* temp){
    if(!temp)
    return;
    inorder(temp->left);
    cout<<temp->key<<" ";
    inorder(temp->right);
}
struct Node* deletion(struct Node* root,int data){
    if(root==NULL)
    return NULL;
    if(root->left==NULL&&root->right==NULL){
        if(root->key==data)
        return NULL;
        else
        return root;
    }
    Node *key_node=NULL;
    Node* temp;
    Node* last;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->key==data)
        key_node=temp;
        if(temp->left){
            //storing the parent node
            last=temp;
            q.push(temp->left);
        }
        if(temp->right){
            //storing the parent node
            last=temp;
            q.push(temp->right);
        }
    }
    if(key_node!=NULL){
        key_node->key=temp->key;
        if(last->right==temp)
        last->right=NULL;
        else
        last->left=NULL;
        delete(temp);
    }
    return root;
    
}
int main()
{
    struct Node* root=newNode(9);
    root->left=newNode(2);
    root->left->left=newNode(4);
    root->left->right=newNode(7);
    root->right=newNode(8);
    cout<<"Inodere traveral before deletion: ";
    inorder(root);
    int dNode=7;
    root=deletion(root,dNode);
    cout<<endl;
    cout<<"Inodere traveral after deletion: ";
    inorder(root);
    return 0;
}
