
#include<iostream>
#include<queue>

using namespace std;
/*


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
void insertIntoBst(node* &root,int data){
     if(root==NULL){
        root=new node(data);
        return;
     }
     if(root->data>data){
        insertIntoBst(root->left,data);
        return;
     }
     if(root->data<=data){
        insertIntoBst(root->right,data);
        return;
     }
}

node* miniVal(node* root){
    return NULL;
}
node* deleteNode(node* root,int d){
    //base case
    if(root==NULL){
        return NULL;
    }
    if(root->data==d){
     if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
        
     }
     if(root->left!=NULL && root->right==NULL){
        node* temp=root->left;
        delete root;
        return temp;

     }
     if(root->left==NULL && root->right!=NULL){
    node* temp=root->right;
        delete root;
        return temp;

     }
     if(root->left!=NULL && root->right!=NULL){
        //either take min from right or max from left
        //write the min value function
        int mini=miniVal(root->right)->data;
        root->data=mini;
        root->right=deleteNode(root->right,mini);
        return root;

     }

    }
    if(root->data>d){
      root->left=deleteNode(root->left,d);
      return root;
    }
    if(root->data<d){
      root->right=deleteNode(root->right,d);
      return root;
    }

}
void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        insertIntoBst(root,data);
        cin>>data;
    }
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
//we have to flatten bst into a linked list
//
      void inorder(node* root,vector<int> &val){
    if(root==NULL){
        return ;
    }
    inorder(root->left,val);
    val.push_back(root->data);
    inorder(root->right,val);

   }
   node* flatten(node* root,int target){
    vector<int> inorderVal;
    inorder(root,inorderVal);
    int n=inorderVal.size();
    node* newRoot=new node(inorderVal[0]);
    node* curr=newRoot;
    for(int i=1;i<n;i++){
        node* temp=new node(inorderVal[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;
  return newRoot;
   }
   
   //Bst from a preorder

   node* solve(vector<int> &preOrder,int mini,int maxi,int &i){
    if(i>=preOrder.size()){
        return NULL;
    }
    if(preOrder[i]< mini || preOrder[i]>maxi){
        return NULL;
    }
    node* root=new node(preOrder[i++]);
    root->left=solve(preOrder,mini,root->data,i);
    root->right=solve(preOrder,root->data,maxi,i);
    return root;
   }
   node* bstPreorder(vector<int> &preOrder){
  int mini=INT16_MIN;
  int maxi=INT16_MAX;
  int i=0;
return solve(preOrder,mini,maxi,i);
   }

   int main(){
node* root=NULL;
takeInput(root);
// cout<<root->data<<endl;
levelOrderTraversal(root);
}