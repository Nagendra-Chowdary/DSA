#include<iostream>
#include<queue>

using namespace std;
/*
sum of nodes in longest path from root to leaf.

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
void solve(node* root,int sum,int &maxSum,int len,int &maxLen){
        if(root==NULL){
            if(len>maxLen){
                maxLen=len;
                maxSum=sum;
            }
            else if(len==maxLen){
                maxSum=max(sum,maxSum);
            }
            return;
        }
        sum+=root->data;
        solve(root->left,sum,maxSum,len+1,maxLen);
        solve(root->right,sum,maxSum,len+1,maxLen);
}
int sum(node* root){
       int len=0;
       int maxLen=0;
       int sum=0;
       int maxSum=INT16_MIN;
       solve(root,sum,maxSum,len,maxLen);
         return maxSum;
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
   int main(){
node* root=NULL;
root= buildTree(root);
}