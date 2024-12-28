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
node* kAnce(node* root,node* n,int &k){
    if(root==NULL){
        return NULL;
    }
    if(root==n){
        return n;
    }
    if(k==0){
        return root;
    }
    node* leftAns=kAnce(root->left,n,k);
    node* rightAns=kAnce(root->right,n,k);
    if(leftAns!=NULL && rightAns==NULL){
          k--;
          if(k<=0){
            k=INT16_MAX;
            return root;
          }
          return leftAns;
    }
    if(leftAns==NULL && rightAns!=NULL){
          k--;
          if(k<=0){
            k=INT16_MAX;
            return root;
          }
          return rightAns;
    }
    return NULL;
    
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