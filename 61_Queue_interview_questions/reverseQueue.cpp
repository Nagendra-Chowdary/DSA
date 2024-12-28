#include<iostream>
#include<queue>
using namespace std;
//we can just push the queue elements one by one.
// into the stack and add them to the queue again to make it reverse.

//queue reversal using reversal
queue<int> reverse(queue<int> a){
     if(a.front()==a.back()){
        return a;
     }
        int b=a.front();
        a.pop();
        queue<int> s=reverse(a);
        s.push(b);
        return s;

     

}

int main(){

}