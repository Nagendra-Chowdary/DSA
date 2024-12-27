//first negative integer in a 2 size window, in an array.

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
//approach ---
/*
to reverse first k elements of a queue:
add those elements to a stack and then add them again
to the queue

*/

 
int main(){
queue<int> q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
int k=3;
stack<int> s;
for(int i=0;i<k;i++){
    int val=q.front();
    s.push(val);
    q.pop();
}
while(!s.empty()){
    q.push(s.top());
   s.pop();
}
int t=q.size()-k;
while(t--){
    int val=q.front();
    q.pop();
    q.push(val);

}
cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
q.pop();
}