#include<iostream>
#include<queue>
#include<stack>
#include<map>

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
//construct a binary tree from inorder(LNR) and preorder(NLR)

//imagine  seconds used to burn its neighbouring elements(children and above node).
//calculate the time spent to burn the tree starting from the given target.

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
node* createParentMapping(node* root,int target,map<node*,node*> nodeToParent){
 node* res=NULL;
 queue<node*> q;
 q.push(root);
 nodeToParent[root]=NULL;
 while(!q.empty()){
    node* front=q.front();
    q.pop();
    if(front->data==target){
        res=front;
    }
    if(front->left){
        nodeToParent[front->left]=front;
        q.push(front->left);
    }
    if(front->right){
        nodeToParent[front->right]=front;
        q.push(front->right);
    }
 }
 return res;
}
int burnTree(node* root,map<node*,node*> nodeToParent){
        map<node*,bool> visited;
        queue<node*> q;
        q.push(root);
        visited[root]=true;
        int ans=0;
        
        while(!q.empty()){
            bool flag=false;
            int size=q.size();
            for(int i=0;i<size;i++){
                node* front=q.front();
                q.pop();
                if(front->left && !visited[front->left]){
                    flag=1;
                   q.push(front->left);
                   visited[front->left]=1;
                }
                if(front->right && !visited[front->right]){
                    flag=1;
                   q.push(front->right);
                   visited[front->right]=1;
                }
                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    flag=1;
                   q.push(nodeToParent[front]);
                   visited[nodeToParent[front]]=1;
                }
            }
            if(flag==true){
                ans++;
            }
        }
        return ans;

}
int minTime(node* root,int target){
    int ans=0;
    map<node*,node*> nodeToParent;
    node* targetNode=createParentMapping(root,target,nodeToParent);
    int ans=burnTree(targetNode,nodeToParent);
    return ans;
}
   int main(){
node* root=NULL;
root= buildTree(root);
}