
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

   //inorder traversal of bst is sorted.
   //
    int solve(node* root,int i,int k){
      if(root==NULL){
        return -1;
      }
      int left=solve(root->left,i,k);
      if(left!=-1){
         return left;
      }
      i++;
      if(i==k){
        return root->data;
      }
      return solve(root->right,i,k);
    }
   int kthSmallest(node* root,int k){
    int i=0;
    int ans=solve(root,i,k);
    return ans;
   }
   int main(){
node* root=NULL;
takeInput(root);
// cout<<root->data<<endl;
levelOrderTraversal(root);
}