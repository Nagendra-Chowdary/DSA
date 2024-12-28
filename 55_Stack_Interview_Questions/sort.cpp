//The very same logic as deleting a mid element.
#include<iostream>
#include<stack>

using namespace std;
//Reverse a stack using recursion.
void sortedInsert(stack<int> &s,int ele){
    if(s.empty() ||(!s.empty() && ele>=s.top())){
        //    cout<<S.top()<<endl;
         s.push(ele);
           return;
    }
    else{
        int t=s.top();
      s.pop();
        sortedInsert(s,ele);
        s.push(t);
    }
}
void sort(stack<int> &s){
    if(s.empty()){
        //    cout<<S.top()<<endl;
           return;
    }
    else{
        int t=s.top();
        s.pop();
        sort(s);
        sortedInsert(s,t);
        
    }
}
void rev(stack<int> &s){
    if(s.empty()){
    
           return;
    }
    else{
        int t=s.top();
      s.pop();
        rev(s);
        sort(s);
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
    s.push(900);
    s.push(1900);
    s.push(990);
    // int t=s.top();
    bool a=s.empty();
    // cout<<a<<endl;
    // cout<<t<<endl;
    sortedInsert(s,7);
    sort(s);
    
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    


}