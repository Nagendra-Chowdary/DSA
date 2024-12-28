#include<iostream>
#include<queue>
#include<stack>
using namespace std;
//very similar to Nstacks in an array.
class Kq{
public:
int n,k;
int *front;
int *rear;
int *arr;
int freespot;
int *nxt;
Kq(int n,int k){
    this->k=k;
    this->n=n;
    front=new int[k];
    rear=new int[k];
    nxt=new int[n];
  for(int i=0;i<k;i++){
    front[i]=-1;
    rear[i]=-1;
  }
  for(int i=0;i<n;i++){
   nxt[i]=i+1;

  }
  nxt[n-1]=-1;

  
}
    void enqueue(int ele,int n){//n is queue no.
       if(freespot==-1){
        cout<<"No empty space is present"<<endl;
        return;
       }
        int index=freespot;
        freespot=nxt[index];
        if(front[n-1]==-1){
       front[n-1]=index;
        }
        else{
            nxt[rear[n-1]]=index;
        }
        nxt[index]=-1;
            rear[n-1]=index;
        arr[index]=ele;
    }
    void dequeue(int n){
        if(front[n-1]==-1){
      cout<<"queue underflow"<<endl;
      return;
        }
        int index=front[n-1];
        front[n-1]=nxt[front[n-1]];
        nxt[index]=freespot;
        freespot=index;
        


    }
};
int main(){

}