//int a[34]={0}  will give an array with all zeros but it doesn't work with other numbers.
//Instead, you can use this
/*
 int arr[33];
    std::fill_n(arr,33,9);
*/

//size=sizeof(arr)/sizeof(int);
  //
//when you are passing an array to a func,(a variable) 
//you are actually passing the base address of the array
//so if u change the array in the func, it will change outside 
//the func also.

//if you update the array in the function, it will also be updated even outside the function,
//becoz when you pass an array to a function,you are giving the base address of the array ,not the values

#include<iostream>
using namespace std;

int getMax(int arr[],int siz){
    int maxi=INT32_MIN;

    for(int i=0;i<siz;i++){
        if(arr[i]>maxi){
            maxi=arr[i];

        }
            //instead of the above, you can also write in for loop
            // maxi=max(maxi,arr[i]);
    }
  return maxi;
}
int main(){

    int a[4];
    int b[3]={5};
    int arr[100];
    int siz;
    cout<<"enter size of the array"<<endl;
    cin>>siz;
    cout<<"Enter the elements in the array \n";
    for(int i=0;i<siz;i++){
        cin>>arr[i];
    }
    cout<<"The maximum element in the array is "<<getMax(arr,siz)<<endl;

    


}