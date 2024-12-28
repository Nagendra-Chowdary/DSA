#include<iostream>
#include<queue>

using namespace std;
//a non linear data structure 

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
   void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node* temp=q.front();

        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
         q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<endl;
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        /* code */
    }
    
  
   }
   void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
   }
   void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
   }
   void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
   }
//    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main(){
node* root=NULL;
root= buildTree(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
inorder(root);
}
//Homework- reverse level order traversal