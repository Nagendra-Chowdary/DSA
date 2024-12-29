
//??
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
  
  //merge 2 BSTs

  //approach--1
  /*
  get inorders for two bsts
  then merge those two sorted inorders(they are nothing but arrays or vectors)
  construct bst from inorder

  */
   node* inorderToBst(int s,int e,vector<int> inorderVal){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    node* root=new node(inorderVal[mid]);
    root->left=inorderToBst(0,mid-1,inorderVal);
    root->right=inorderToBst(mid+1,e,inorderVal);
   }
 node* merger(node* one ,node* two){
    vector<int> onee;
    inorder(one,onee);
    vector<int> twoo;
    inorder(two,twoo);
    vector<int> ans(onee.size()+twoo.size());
    int i=0,j=0,k=0;
    while(i<onee.size() && i<twoo.size()){
        if(onee[i]>twoo[j]){
            ans[k++]=onee[i];
            i++;
        }
        else{
        ans[k++]=twoo[j];
        j++;
        }
    }
    while(i<onee.size()){
         ans[k++]=onee[i];
            i++;
    }
    while(j<twoo.size()){
         ans[k++]=twoo[j];
            j++;
    }
   return inorderToBst(0,ans.size()-1,ans);
 }
  

  ///Approach-2
  node* convertIntoSortedLL(node* root,node* head){
    if(root==NULL){
        return NULL;
    }
    convertIntoSortedLL(root->right,head);
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    convertIntoSortedLL(root->left,head);

  }

  node* mergeLLs(node* head1,node* head2){
    node* head1=NULL;
    node* head=NULL;
    node* tail=NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;

            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }
        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head1=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
            }
        }
    }
    while(head1!=NULL){
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;

    }
    while(head2!=NULL){
            tail->right=head2;
                head2->left=tail;
                tail=head2;
    }
  }
  int countNodes(node* head){
    int cnt=0;
    node* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->right;
    }
    return cnt;
  }

  node* sortedLLtoBst(node* &head,int n){
    if(n<=0 || head==NULL){
        return NULL;
    }
    node* left=sortedLLtoBst(head,n/2);
    node* root=head;
    root->left=left;
    head=head->left;
    root->right=sortedLLtoBst(head,n-n/2-1);
    return root;
  }
node* convSortedDLLToBst(node* root1,node* root2){
     node* head1=NULL;
      convertIntoSortedLL(root1,head1);
      head1->left=NULL;
      node* head2=NULL;
      convertIntoSortedLL(root2,head2);
      head2->left=NULL;
      node* m=mergeLLs(head1,head2);
      node* mm=sortedLLtoBst(m,countNodes(m));
      return mm;
}

   int main(){
node* root=NULL;
takeInput(root);
// cout<<root->data<<endl;
levelOrderTraversal(root);
}