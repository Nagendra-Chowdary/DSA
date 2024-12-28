#include <iostream>
using namespace std;
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
      void enqueue(int ele){
         if((front==0 && rear==size-1 )|| rear==(front-1)%(size-1)){
            
            cout<<"Full"<<endl;
         }
         else if(front==-1){
            front=rear=0;
            arr[rear]=ele;
            rear++;
         }
         else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=ele;
         }
         else{
            rear++;
            arr[rear]=ele;
         }
      }
      void dequeue(){
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
a.enqueue(5);
cout<<a.size<<endl;
//In a doubly ended queue,
//input restricted queue 
//input is done only one side but pop can be front or rear
//output restricted queue
//pop is done only from rear but push from both front and rear
}