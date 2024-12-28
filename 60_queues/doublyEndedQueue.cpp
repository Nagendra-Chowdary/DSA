#include <iostream>
// #include <queue>
using namespace std;
// int main(){
//     deque<int> a;
//     a.push_front(12);
//     a.push_back(45);
//     cout<<a.front()<<" "<<a.back()<<endl;
// }



class queue{
      public:
      int *arr;
      int size;
      int front;
      int rear;
      queue(int n){
      arr=new int[n];
      size=n;
      front=-1;
      rear=front;
      }
      void push_front(int ele){
         if((front==0 && rear==size-1 )|| (front!=0 && rear==(front-1)%(size-1))){
            
            cout<<"Full"<<endl;
         }
         else if(front==-1){
            front=rear=0;
          }
         else if(front==0 && rear!=size-1){
            front=size-1;
         }
         else{
            front--;
         }
            arr[front]=ele;
      }
         void pushRear(int ele){
         if((front==0 && rear==size-1 )|| (front!=0 && rear==(front-1)%(size-1))){
            
            cout<<"Full"<<endl;
         }
         else if(front==-1){
            front=rear=0;
            arr[rear]=ele;
            rear++;
         }
         else if(rear==size-1 && front!=0){ //means rear is at end but front is not zero means it is at some
            rear=0;                             //where middle so there is still some space.  
            arr[rear]=ele;
         }
         else{
            rear++;
            arr[rear]=ele;
         }
      }
      void popFront(){
        if(front==-1 ){
            cout<<"Empty"<<endl;
        }
        else{
            arr[front]=-1;

            if(front==rear){//means single element
                front=rear=-1;
            }
            if(front==size-1){
                front=0; //to maintain cyclic nature;
            }
            else{
            front++;
           //normal flow;
            }
        }
      } 
      void popRear(){
        if(front==-1 ){
            cout<<"Empty"<<endl;
        }
        else{
            arr[rear]=-1;

            if(front==rear){//means single element
                front=rear=-1;
            }
            if(rear==0){
                rear=size-1; //to maintain cyclic nature;
            }
            else{
            rear--;
           //normal flow;
            }
        }
      } 
      bool isEmpty(){
        if(front==rear){
            return true;
        }
        return false;
      }
      int frontEle(){
      if(front!=rear){
        return arr[front];
      }
      return -1;
      }
};
int main(){
queue a(7);
a.push_front(5);
cout<<a.size<<endl;
//In a doubly ended queue,
//input restricted queue 
//input is done only one side but pop can be front or rear
//output restricted queue
//pop is done only from rear but push from both front and rear
}