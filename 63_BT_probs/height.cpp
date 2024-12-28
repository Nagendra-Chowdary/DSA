#include<iostream>
#include<queue>

using namespace std;
//height - maximum path between root and a leaf node.
//using recursion
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
int height(node* root){
    if(root==NULL){
        return 0;

    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}
int main(){
node* root=NULL;
root= buildTree(root);
}