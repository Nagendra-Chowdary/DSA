#include<iostream>
#include<queue>

using namespace std;
int main(){
 //max heap--the first element will always be the largest element in the queue
    priority_queue<int> maxi;
//min heap--the first element will always be the smallest element in the queue
priority_queue<int,vector<int>,greater<int>> min;

maxi.push(1);
maxi.push(3);
maxi.push(0);
maxi.push(2);
int n=maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<endl;
maxi.pop();
}
min.push(1);
min.push(3);
min.push(0);
min.push(2);
int m=min.size();
for(int i=0;i<m;i++){
    cout<<min.top()<<endl;
min.pop();
}
}