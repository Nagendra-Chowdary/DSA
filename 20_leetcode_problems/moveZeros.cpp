#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    int arr[11]={0,0,2,0,1,0,3,0,0,0,7};
    int n=11;
    int i=0,j=1;;
    // while(i<n && j<n){
    //     if(arr[i]==0){
    //         if(arr[j]==0){
    //             j++;
    //         }
    //         else{
    //             swap(arr[i],arr[j]);
    //             i++;
    //             j++;
    //         }
         
    //     }
    //     else{
    //     i++;
    //     j++;
    //     }
    // }
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[a],arr[i]);
            a++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}