#include<iostream>
using namespace std;
void pivot(int arr[],int size){
int mid;
    int start=0;
    int end = size-1;
    mid=start+(end-start)/2;
    while(start<end){
   
    if(arr[mid]>=arr[0]){
      start=mid+1;
    }
    else if(arr[mid]<arr[0]){
     end=mid;
    }
    mid=start+(end-start)/2;
    
    }
    cout<<end<<endl;
}
int main(){
int a[100]={11,1,2,3,4,5};
pivot(a,5);
}