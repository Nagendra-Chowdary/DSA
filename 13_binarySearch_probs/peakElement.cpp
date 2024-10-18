#include<iostream>
using namespace std;
void peakEle(int arr[],int size){
    int mid;
    int start=0;
    int end = size-1;
    mid=start+(end-start)/2;
    int firstInd,lastInd;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
        start=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
        end=mid;
        }
    mid=start+(end-start)/2;
    }
    cout<<endl<<arr[end]<<endl;

  
}
int main(){
int a[100]={1,2,3,5,6,10,8,7,4,3,2,1};
peakEle(a,11);
}