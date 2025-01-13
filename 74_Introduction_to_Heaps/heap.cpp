#include <iostream>
#include<queue>
using namespace std;

// heap  is a CBT that comes with a heap order property
// CBT is a complete binary tree-- all levels are completely
// filled except the last level.
// In CBT elements are added from left to right
// So even in the last level if right node is present but left is not,
// then it is not a CBT.

// Two types of heaps-- maxheap and minheap
// maxheap -- a node is always greater than its children.
// minheap -- a node is always smaller than its children.

class heap
{
    //imagine index from 1
    //left child will be 2*index and right child will 2*index +1
    //parent will be index/2;

    public:
    int arr[100];
    int size ;


    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val)
    //insertion goes from left to right in order.
    //we only have to worry about parent node values.
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void deletefromHeap(){
     arr[1]=arr[size];
     size--;
     int i=1;
    while (i<size)
    {
        int rightInd=2*i+1;
        int leftInd=2*i;
        if(leftInd<size && arr[i]<arr[leftInd]){
            swap(arr[i],arr[leftInd]);
            i=leftInd;
        }
       else if(rightInd<size && arr[i]<arr[rightInd]){
            swap(arr[i],arr[rightInd]);
            i=rightInd;
        }
        else{
            return;
        }

     }
    

    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<endl;
        }
    }
};

//In a CBT, leaf nodes run from n/2 +1 to n.

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i +1;
    if(left <=n && arr[largest]<arr[left]){
    largest=left;
    }
     if(right <=n && arr[largest]<arr[right]){
   largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
    }

}

//Heap sort
void heapSort(int *arr,int n){
    int i=1;
    int size=n;
    while(size>1){
     swap(arr[1],arr[size]);
     size--;
     heapify(arr,size,1);
     
    }

}

//Priority queue -- used to build min & max heaps
//need to include queue header file.

int main()
{
    heap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.print();
    int arr[100]={-1,70,60,55,45,50}; //54,53,55,52,50
    int n=5;
    for(int i=n/2;i>0;i--){
    heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<" "<<arr[i]<<endl;
    }
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<"  "<<arr[i]<<endl;
    }

    //max heap
    priority_queue<int> pq;
    pq.push(45);
    pq.push(5);
    pq.push(400);
    cout<<pq.top()<<endl;

    //Min heap
    priority_queue<int,vector<int>,greater<int>> pqq;
    pqq.push(45);
    pqq.push(5);
    pqq.push(400);
    cout<<pqq.top()<<endl;

}