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
vector<int> bottView(node* root){
  vector<int> ans;
  if(root==NULL){
    return ans;
  }
  map<int,int> topNode;
  queue<pair<node*,int>> q;
  q.push(make_pair(root,0));
  while(!q.empty()){
    pair<node*,int> temp=q.front();
    q.pop();
    node* frontNode=temp.first;
    int hd=temp.second;

        topNode[hd]=frontNode->data;
    if(frontNode->left){
        q.push(make_pair(frontNode->left,hd-1));
    }
    if(frontNode->right){
        q.push(make_pair(frontNode->right,hd+1));
    }
  }
  for(auto i:topNode){
    ans.push_back(i.second);
  }
  return ans;
}
void solve(node* root,int level,vector<int> &ans){
    if(root==NULL){
    return;
  }
  if(level==ans.size()){
    ans.push_back(root->data);
  }
  solve(root->left,level+1,ans);
  solve(root->right,level+1,ans);
}
vector<int> leftView(node* root,int level){
  vector<int> ans;
  solve(root,0,ans);
  return ans;
}
vector<int> topView(node* root){
  vector<int> ans;
  if(root==NULL){
    return ans;
  }
  map<int,int> topNode;
  queue<pair<node*,int>> q;
  q.push(make_pair(root,0));
  while(!q.empty()){
    pair<node*,int> temp=q.front();
    q.pop();
    node* frontNode=temp.first;
    int hd=temp.second;

    if((topNode.find(hd))==topNode.end()){//this condition will be true if we can't find anything for hd.
        topNode[hd]=frontNode->data;
    }
    if(frontNode->left){
        q.push(make_pair(frontNode->left,hd-1));
    }
    if(frontNode->right){
        q.push(make_pair(frontNode->right,hd+1));
    }
  }
  for(auto i:topNode){
    ans.push_back(i.second);
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
vector<int> ans=bottView(root);
for(int i:ans){
    cout<<i<<endl;
}

}