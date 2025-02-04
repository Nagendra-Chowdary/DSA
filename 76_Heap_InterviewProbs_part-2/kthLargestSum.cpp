#include <iostream>
#include<queue>
#include<algorithm>
using namespace std;


class node{
   public:
   int data;
   node* left;
   node* right;
   node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
   }
};
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

void heapify(vector<int> arr,int n,int i){
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
// void heapSort(int *arr,int n){
//     int i=1;
//     int size=n;
//     while(size>1){
//      swap(arr[1],arr[size]);
//      size--;
//      heapify(arr,size,1);
     
//     }
//  for(int i=1;i<=n;i++){
//     cout<<arr[i]<<" ";

//  }
//  cout<<endl;
// }

//Priority queue -- used to build min & max heaps
//need to include queue header file.


//Kth largest sum of a subarray
//subarray should have only consecutive elements.
// int Kthlargest(vector<int> arr,int k){
//     vector<int> sumStore;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             sumStore.push_back(sum);
//         }
//     }
//     sort(sumStore.begin(),sumStore.end());
//     return sumStore[sumStore.size()-k];
// }

//Approach-2
int Kthlargest(vector<int> arr,int k){
   priority_queue<int,vector<int>,greater<int>> mini;
   int n=arr.size();
   for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
    sum+=arr[j];
    if(mini.size()<k){
        mini.push(sum);
    }
    else{
        if(sum>mini.top()){
            mini.pop();
            mini.push(sum);
        }
    }
    }
   }
   return mini.top();
}
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
    
 

}