/*
1. The Maximum number of nodes in a binary tree of height ‘h’ is 2h – 1. 
2. In a Binary Tree with N nodes, minimum possible height or the minimum number of levels is Log2(N+1)
3. A Binary Tree with L leaves has at least Log2L+ 1   levels



*/


#include <iostream>

using namespace std;
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
  Node(int val){
      data=val;
      left=NULL;
      right=NULL;
  }
};
int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    return 0;
}
