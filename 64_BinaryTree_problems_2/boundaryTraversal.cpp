#include<iostream>
#include<queue>

using namespace std;
/*
imagine a binary tree, print from left to right in one level
and then right to left on another level and so on...

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

//traverse through the boundary elements of the tree
//algo--
//print all left elements except leaf nodes
//next , print all leaf nodes from left to right
//print all right elements except leaf node from down to up.

void goLeft(node* root,vector<int> &ans){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return ;
    }
    ans.push_back(root->data);
    if(root->right){
        goLeft(root->right,ans);
    }
    else if(root->left){
        goLeft(root->left, ans);
    }

}
void goRight(node* root,vector<int> &ans){
    if(root==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return ;
    }
    ans.push_back(root->data);
    if(root->right){
        goRight(root->right,ans);
    }
    else if(root->left){
        goRight(root->left, ans);
    }

}
void traverseLeaf(node* root,vector<int> ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
}
vector<int> boundary(node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    goLeft(root,ans);
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
    goRight(root,ans);

   return ans;
}
vector<int> zigZag(node* root){
    vector<int> result;
    if(root==NULL){
        return result;
    }
    queue<node*> q;
    q.push(root);
    bool leftToRight=true;
    while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);

        for(int i=0;i<size;i++){
            node* frontNode=q.front();
            q.pop();
            int index=leftToRight?i:size-i-1;
            ans[index]=frontNode->data;
            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }
        leftToRight=!leftToRight;
        for(auto i:ans){
            result.push_back(i);
        }
    }
    return result;
    }

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