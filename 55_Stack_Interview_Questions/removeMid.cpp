#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &S,int count,int size){
    if(count==size/2){
        //    cout<<S.top()<<endl;
           cout<<S.top()<<" "<<count<<endl;
           S.pop();
           return;
    }
    else{
        int t=S.top();
      S.pop();
        solve(S,count+1,size);
        S.push(t);
    }
}

void deleteMid(stack<int> &S,int size){
     int count=0;
     solve(S,count,size);
}

//stack is a data structure that follows LIFO.
int main(){
    stack<int> s;
    s.push(9);
    s.push(90);
    s.push(90);
    s.push(900);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(990);
    s.pop();
    int t=s.top();
    bool a=s.empty();
    // cout<<a<<endl;
    // cout<<t<<endl;
    deleteMid(s,7);
    
    


}