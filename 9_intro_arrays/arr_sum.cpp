#include<iostream>
using namespace std;

int getSum(int arr[],int siz){
    int sum=0;
    for(int i=0;i<siz;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
  int siz;
    cout<<"enter size of the array"<<endl;
    cin>>siz;
    cout<<"Enter the elements in the array \n";
    for(int i=0;i<siz;i++){
        cin>>arr[i];
    }
    cout<<"The sum of the elements in the array is "<<getSum(arr,siz)<<endl;
}