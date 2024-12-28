//The very same logic as deleting a mid element.
#include<iostream>
#include<stack>

using namespace std;

void insertBott(stack<int> &s,int ele){
    if(s.empty()){
        //    cout<<S.top()<<endl;
         s.push(ele);
           return;
    }
    else{
        int t=s.top();
      s.pop();
        insertBott(s,ele);
        s.push(t);
    }
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
    // int t=s.top();
    bool a=s.empty();
    // cout<<a<<endl;
    // cout<<t<<endl;
    insertBott(s,7);
    cout<<s.top()<<endl;
    
    


}