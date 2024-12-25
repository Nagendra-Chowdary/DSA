#include<iostream>
using namespace std;
//
//We can implement two stacks in one array taking only one input size
//and pushing in one stack from left to right and the other from right to left
//we can also start second stack from middle of array but it will result in bad
//space utilization.
//

class linkedList
{
public:
    int data;
    linkedList *next;
    linkedList(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertAtTail(linkedList *&head, linkedList *&tail, int data)
{
    linkedList *temp = new linkedList(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }

    tail->next = temp;
    temp->next = NULL;
    tail = temp;
    /* or you can just pass the tail as argument instead of head to make it easier*/
}
class stack{
  public:
  linkedList* head;
  linkedList* tail;

  int top;
  int size;
  stack(int size){
    this->size=size;
    top=-1;
  }
  void push(int ele){
    if(this->size-top>=1){
       top++;
       cout<<top<<endl;

       insertAtTail(head,tail,ele);
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
     return tail->data;
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
    s.push(909);
    s.push(909);
    s.push(909);
    s.pop();
    int t=s.peek();
    bool a=s.isEmpty();
    cout<<s.size<<endl;
    cout<<a<<endl;
    cout<<t<<endl;
    
    


}