#include<iostream>
using namespace std;
int arraySum(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return (arr[n-1]+arraySum(arr,n-1));
}
int main(){
int arr[5]={1,2,3,4,8};
cout<<arraySum(arr,5)<<endl;
}