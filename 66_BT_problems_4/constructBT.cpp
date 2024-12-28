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
//construct a binary tree from inorder(LNR) and preorder(NLR)

int findPosition(int in[],int ele,int n){
    for(int i=0;i<n-1;i++){
        if(in[i]==ele){
            return i;
        }
    }
    return -1;
}
node* solve(int in[],int pre[],int &index,int inOrderStart,int inorderEnd,int n){
    if(index>=n || inOrderStart>=inorderEnd){
      return NULL;
    }
    int element=pre[index++];
    node* root=new node(element);
    int pos=findPosition(in,element,n);//u can use a map instead.
    //3 1 4 0 5 2 in
    //0 1 3 4 2 5 pre

    root->left=solve(in,pre,index,inOrderStart,pos-1,n);
    root->right=solve(in,pre,index,pos+1,inorderEnd,n);
    return root;
}
node* buildBT(int in[],int pre[],int n){
    int preOrderIndex=0;
    node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
    return ans;
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