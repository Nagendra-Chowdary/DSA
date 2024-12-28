//longest path between any two leafs nodes.
#include<iostream>
#include<queue>

using namespace std;
//check for balanced tree
//means height(left) and height(right ) difference should not be greater than one.

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
pair<int,int> diameterFast(node* root){
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameterFast(root->left);
    pair<int,int> right=diameterFast(root->right);
      int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;
    pair<int,int> ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;

    return ans;  //cout ans.first to get the diameter.
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+1+height(root->right);
    int ans=max(op1,max(op2,op3));
    return ans;
}

pair<bool,int> fastIsBalanced(node* root){

    if(root==NULL){
        pair <bool,int> p=make_pair(true,0);
        return p;
    }
    
pair<bool,int>  left=fastIsBalanced(root->left);
    pair<bool,int> right=fastIsBalanced(root->right);
    bool leftAns=left.first;
    bool rightAns=right.second;
    bool diff=abs(left.second-right.second)<=1;
pair<bool,int> p;
p.second=max(left.second,right.second)+1;

    if(leftAns && rightAns && diff){
    p.first=true;
    }
    else{
     p.first=false;
    }
}
bool isBalance(node* root){
    if(root==NULL){
        return true;
    }
    bool left=isBalance(root->left);
    bool right=isBalance(root->right);
    bool diff=abs(height(root->left)-height(root->right))<=1;
    if(left && right && diff){
        return true;
    }
    else{
    return false;
    }
}
int main(){
node* root=NULL;
root= buildTree(root);

}