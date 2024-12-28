#include<iostream>
#include<queue>

using namespace std;
/*
imagine a binary tree, print from left to right in one level
and then right to left on another level and so on...

*/

class node{
   public:
   int data;
   node* left;
   node* right;
   node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
   }
};

node* lca(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;

    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* leftAns=lca(root->left,n1,n2);
    node* rightAns=lca(root->right,n1,n2);
    if(leftAns!=NULL && rightAns==NULL){
        return leftAns;
    }
    else if(leftAns==NULL && rightAns!=NULL){
        return rightAns;
    }
    else{
        return NULL;
    }
}

   node* buildTree(node* root){
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new node(data);
    cout<<"enter the data for inserting left"<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data for inserting right"<<endl;
    root->right=buildTree(root->right);
return root;
   }
   int main(){
node* root=NULL;
root= buildTree(root);
}