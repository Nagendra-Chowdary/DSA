
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

//inorder predecessor and inorder successor of a node
// approach--
//predecessor-- max element from its left.
//successor-- min element from its right.
   
pair<int,int> predecessorSuccessor(node* root, int key){
    node* temp=root;
    int pre=-1;
    int suc=-1;
    while(temp->data!=key){
        if(temp->data>key){
        suc=temp->data;
        temp=temp->left;
        }
        if(temp->data<key){
        pre=temp->data;
        temp=temp->right;
        }
    }
    node* leftTree=temp->left;
    while(leftTree!=NULL){
        pre=leftTree->data;
        leftTree=leftTree->right;
    }
    node* rightTree=temp->right;
    while(leftTree!=NULL){
        pre=rightTree->data;
        rightTree=rightTree->left;
    }
    pair<int,int> ans=make_pair(pre,suc);
    return ans;

}

   int main(){
node* root=NULL;
takeInput(root);
// cout<<root->data<<endl;
levelOrderTraversal(root);
}