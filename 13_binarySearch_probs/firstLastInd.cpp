#include<iostream>
using namespace std;
void firstOccu(int arr[],int size,int key){
    int mid;
    int start=0;
    int end = size-1;
    int firstInd,lastInd;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            firstInd=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
     start=0;
     end = size-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            lastInd=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<firstInd<<endl<<lastInd<<endl;
    cout<<"Total no.of occurences is "<<(lastInd-firstInd+1)<<endl;
}
int main(){
int a[100]={1,2,3,3,3,3,3,5};
firstOccu(a,8,3);
}