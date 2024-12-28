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
//IN a string of only brackets
//we have to find the min no. of braces to be inverted 
//to make the string valid
//opening brackets =closing
//the string can't be odd;
//Upon observing all the cases, we have found out that
// for an invalid string with a opening brackets and b closing brackets
//min cost will always be ((a+1)/2) + ((b+1)/2)

int findMinCost(stack<char> &s ,string eq){
    if(eq.length()%2==1){
        return -1;
    }
    for(int i=0;i<eq.length();i++){
        
        char ch=eq[i];
        cout<<ch<<endl;
        if(ch=='('){
            s.push(ch);
            cout<<"character pushed on first line:"<<ch<<endl;
        }
        else{
            if(!s.empty() && s.top()=='('){
           cout<<"character popped on sec line:"<<s.top()<<endl;
            s.pop();

            }
            else{
                cout<<"character being pushed in third line : "<<ch<<endl;
                s.push(ch);
            }
        }
        
    }
    int opBrac=0,cloBrac=0;
        while(!s.empty()){
            // cout<<s.top()<<endl;
            if(s.top()=='('){
                opBrac++;
            }
            else{
                cloBrac++;
            }
            s.pop();
        }
        cout<<opBrac<<" "<<cloBrac<<endl;
        int minCost=((opBrac+1)/2)+((cloBrac+1)/2);
        return minCost;
}

//stack is a data structure that follows LIFO.
int main(){
    stack<char> s;
   string eq="())(((";
    cout<<findMinCost(s,eq)<<endl;


}