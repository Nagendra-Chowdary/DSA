#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int ele){
    if(arr[0]==ele){
        return 1;
    }
    if(n==1){
        return 0;
    }
    return (linearSearch(arr+1,n-1,ele));
    //To return the index , we have go from last to first and pass the full array everytime.
}
int main(){
int arr[5]={1,2,3,4,8};
int ele=1;
cout<<linearSearch(arr,5,ele)<<endl;
}