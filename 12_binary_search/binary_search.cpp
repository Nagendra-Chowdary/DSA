#include<iostream>
using namespace std;
//Binary search -- O(log2(n))
//condition for binary search : elements should be in monotonic function
// that means either increasing or decreasing.

int binarySearch(int arr[],int size,int ele ){
    int start =0;
    int end=size-1;
    int mid;
    while(start<=end){
        // mid=(start+end)/2;
        //If we calculate mid like this we may have to add two big numbers 
        // which might result in an out of bounds number.
        mid=start+(end-start)/2;
        if(arr[mid]==ele){
        return mid;
        }
        else if(arr[mid]<ele){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;

}
int main(){
  int even[100]={1,2,3,4,5,6};
  int odd[100]={1,2,3,4,5,6,7};
cout<<binarySearch(odd,7,7)<<endl;

}