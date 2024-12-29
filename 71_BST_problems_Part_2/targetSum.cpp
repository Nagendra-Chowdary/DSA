
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
//searching a node is very similar to insertion using recursion
//we can also write the code in iterative way ratheer than recursion
//for better space complexity by using a  while temp!=NULL temp is root.
//same for the min/max values
//Inorder of a bst is sorted(LNR).
//Deletion is also like searching  a node 
//if the node has no child, you can just free the node and send NULL above
//if the node has single child, return the child above.
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

   //inorder of a Bst is sorted
   void inorder(node* root,vector<int> &val){
    if(root==NULL){
        return ;
    }
    inorder(root->left,val);
    val.push_back(root->data);
    inorder(root->right,val);

   }
   bool twoSum(node* root,int target){
    vector<int> inorderVal;
    inorder(root,inorderVal);
    int i=0,j=inorderVal.size()-1;
    while(i<j){
        int sum=inorderVal[i]+inorderVal[j];
       if(sum<target){
        i++;
       }
       if(sum>target){
        j--;
       }
       if(sum==target){
        return true;
       }
    }
        return false;
   }
   int main(){
node* root=NULL;
takeInput(root);
// cout<<root->data<<endl;
levelOrderTraversal(root);
}