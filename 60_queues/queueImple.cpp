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
         if(rear>=size-1){
            cout<<"Full"<<endl;
         }
         else{
            arr[rear]=ele;
            rear++;
         }
      }
      void dequeue(){
        if(front==rear){
            cout<<"Empty"<<endl;
        }
        else{
            arr[front]=-1;

            front++;
            if(front==rear){
                front=0;
                rear=0;
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
int f=a.frontEle();
cout<<f<<endl;
}