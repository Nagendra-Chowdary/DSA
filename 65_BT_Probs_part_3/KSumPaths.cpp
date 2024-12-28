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
//Find how many paths are there with the given sum
void solve(node* root,int k,int &c,vector<int> path){
    if(root==NULL){
        return;
    }

    path.push_back(root->data);
    solve(root->left,k,c,path);
    solve(root->right,k,c,path);
    int size=path.size();
    int sum=0;
    for(int i=size-1;i>=0;i--){
     sum+=path[i];
     if(sum==k){
        c++;
     }
    }
    path.pop_back();
}
int sumK(node* root,int k){
    vector<int> path;
    int c=0;
    solve(root,k,c,path);
    return c;
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
sumK(root,5);
}