#include<iostream>
using namespace std;
//Program to find the unique element in the array.
//assuming there's only one unique element in the array and each
//element repeats only twice.

int uniqueElement(int arr[],int size){
    int ele=0;
    for(int i=0;i<size;i++){
      //xor of an element with same element is zero.
      //xor of an element with zero is the same element.
      ele^=arr[i];
    }
    return ele;
}
int main(){
int arr[100]={1,8,2,3,2,3,5,6,6,5,1};
int a=uniqueElement(arr,11);
cout<<a<<endl;
}