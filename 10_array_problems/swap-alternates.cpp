#include<iostream>
using namespace std;
//Program to swap the alternate elements of an array.
 //we have to leave the last element untouched if the size of the 
    //array is odd.
void swap_alternates(int arr[],int size){
    size=(size/2)*2;
    //this will give us the even number for odd size(one less than the original size)
   
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    swap_alternates(a,size);
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
   cout<<endl;
}