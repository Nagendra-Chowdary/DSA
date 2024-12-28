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
   void leafcount(node* root,int &count){
    if(root==NULL){
        return;
    }
    leafcount(root->left,count);
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    cout<<root->data<<" ";
    leafcount(root->right,count);
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
void buildTreeFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"enter left data for "<<temp->data<<endl;
        int dataLeft;
        cin>>dataLeft;
        if(dataLeft!=-1){
            temp->left=new node(dataLeft);
            q.push(temp->left);
        }
        cout<<"enter right data for "<<temp->data<<endl;
        int dataRight;
        cin>>dataRight;
        if(dataRight!=-1){
            temp->right=new node(dataRight);
            q.push(temp->right);
        }
    }
}
//    1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main(){
node* root=NULL;
buildTreeFromLevelOrder(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
levelOrderTraversal(root);
int count =0;
leafcount(root,count);
}
