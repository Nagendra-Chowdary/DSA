#include<iostream>
#include<queue>
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
vector<int> verticalOrder(node* root){
map<int,map<int,vector<int>>> nodes;
queue<pair<node*,pair<int,int>>> q;
vector<int> ans;
if(root==NULL){
    return ans;
}
q.push(make_pair(root,make_pair(0,0)));
while(!q.empty()){
    pair<node*,pair<int,int>> temp=q.front();
    node* frontNode=temp.first;
    int hd=temp.second.first;
    int lvl=temp.second.second;
    nodes[hd][lvl].push_back(frontNode->data);
     if(frontNode->left){
        q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
     }
     if(frontNode->right){
        q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
     }
}
 for(auto i:nodes){
    for(auto j:i.second){
        for(auto k: j.second){
            ans.push_back(k);
        }
    }
 }
 return ans;

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