#include<iostream>
using namespace std;
//
//We can implement two stacks in one array taking only one input size
//and pushing in one stack from left to right and the other from right to left
//we can also start second stack from middle of array but it will result in bad
//space utilization
//
class stack{
  public:
  int *arr;
  int top;
  int size;
  stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
  }
  void push(int ele){
    if(this->size-top>1){
       top++;
       arr[top]=ele;
    }
    else{
      cout<<"Stack Overflow";
    }
  }
  void pop(){
    if(top<=-1){
      cout<<"Empty stack"<<endl;
    }
    else{
      top--;
    }
  }
  int peek(){
    //return top element
    if(!isEmpty()){
     return arr[top];
    }
    else{
      cout<<"Empty Stack"<<endl;
      return 0;
    }
  }
  bool isEmpty(){
    if(top>=0){
      return false;
    }
    return true;
  }
};

//stack is a data structure that follows LIFO.
int main(){
    stack s(7);
    s.push(9);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.pop();
    int t=s.peek();
    bool a=s.isEmpty();
    cout<<s.size<<endl;
    cout<<a<<endl;
    cout<<t<<endl;
    
    


}