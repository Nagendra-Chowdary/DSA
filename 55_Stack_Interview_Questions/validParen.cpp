#include<iostream>
#include<stack>
using namespace std;
//Valid parenthesis
//Every opening bracket should have a closing bracket.

bool validParen(stack<char> &s,string expression){

   for(int i=0;i<expression.length();i++){
    char ch=expression[i];
        if(expression[i]=='(' ||expression[i]=='[' || expression[i]=='{'){
            s.push(expression[i]);
        }
        else{
            if(!s.empty()){
            char t=s.top();
            if(ch==')' && t=='(' || ch=='}' && t=='{' || ch==']' && t=='['){
            s.pop();
            }
            else{
                return false;
            }
            }
            else{
                return true;
            }

        }

   }
   return true;
}

//stack is a data structure that follows LIFO.
int main(){
    stack<char> s;
   string expression="{[()]]}";
    cout<<validParen(s,expression)<<endl;
    


}