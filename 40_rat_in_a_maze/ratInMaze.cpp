#include<iostream>
#include<vector>
using namespace std;
bool isSafe(vector<vector<int>> maze,vector<vector<int>> visited,int n,int newx,int newy){
    if(newx>=0 && newy>=0 && newx<=n-1 && newy<=n-1 && maze[newx][newy]==1 && visited[newx][newy]==0){
        return true;
    }
    else{
        return false;
    }
}
void solve(vector<string>& ans,int srcx,int srcy,int n,vector<vector<int>> maze,string path,vector<vector<int>>& visited){
    if(srcx==n-1 && srcy==n-1){
        ans.push_back(path);
        return;
    }
    visited[srcx][srcy]=1;
    int newx=srcx+1;
    int newy=srcy;
    if(isSafe(maze,visited,n,newx,newy) ){
        path.push_back('D');
        solve(ans,newx,newy,n,maze,path,visited);
        path.pop_back();
    }
         newx=srcx;
     newy=srcy+1;
    if(isSafe(maze,visited,n,newx,newy) ){
        path.push_back('R');
        solve(ans,newx,newy,n,maze,path,visited);
        path.pop_back();
    }
         newx=srcx-1;
     newy=srcy;
    if(isSafe(maze,visited,n,newx,newy) ){
        path.push_back('U');
        solve(ans,newx,newy,n,maze,path,visited);
        path.pop_back();
    }
         newx=srcx;
     newy=srcy-1;
    if(isSafe(maze,visited,n,newx,newy) ){
        path.push_back('L');
        solve(ans,newx,newy,n,maze,path,visited);
        path.pop_back();
    }
    visited[srcx][srcy]=0;
}
vector<string> findPath(vector<vector<int>> maze,int n){
  vector<string> ans;
  if(maze[0][0]==0){
    return ans;
  }
  vector<vector<int>> visited=maze;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        visited[i][j]=0;
    }
  }
  int srcx=0,srcy=0;
  string path="";
  solve(ans,srcx,srcy,n,maze,path,visited);
  return ans;
}
int main(){
    vector<vector<int>> maze={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    vector<string> ans=findPath(maze,4);
    for(string a:ans){
        cout<<a<<endl;
    }

}