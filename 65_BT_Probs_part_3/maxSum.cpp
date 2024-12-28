#include<iostream>
#include<queue>

using namespace std;

//max sum of non adjacent nodes
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

pair<int,int> solve(node* root){
      if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
      }
      pair<int,int> left=solve(root->left);
      pair<int,int> right=solve(root->right);
      pair<int,int> res;
        res.first=root->data+left.second+right.second;
        res.second=max(left.first,left.second)+max(right.first,right.second);
        
        return res;

}
int getMaxSum(node* root){
     pair<int,int> ans=solve(root);
     return max(ans.first,ans.second);
}

   int main(){
node* root=NULL;
root= buildTree(root);
}