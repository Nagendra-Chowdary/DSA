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
void rev(stack<int> &s){
    if(s.empty()){
    
           return;
    }
    else{
        int t=s.top();
      s.pop();
        rev(s);
        insertBott(s,t);
    }
}

bool redundantBrackets(stack<char> &s,string eq){
    for(int i=0;i<eq.length();i++){
  char ch=eq[i];
  if(ch=='(' || ch=='+' || ch=='-' || ch=='/'){
    s.push(ch);
  }
  else{
    if(ch==')'){
        bool isRedund=true;
        while(!s.empty() && s.top()!='('){
        char t=s.top();
            if(t=='+' || t=='-' || t=='/'){
             isRedund=false;
            }
            s.pop();
        }
        if(isRedund==true){
            return true;
        }
        s.pop();

    }
  }

    }
    return false;
}

//stack is a data structure that follows LIFO.
int main(){
    stack<char> s;
   string eq="((a+b)+b)))";
    
    cout<<redundantBrackets(s,eq)<<endl;


}