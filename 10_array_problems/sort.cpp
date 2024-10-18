#include<iostream>
using namespace std;
void sort(int arr[],int size){
    // int i=0,j=size-1,c=0;
    // while(i!=j){
    //     if(arr[i]==0 || arr[i]==1){

    //        i++;
    //     }
    //     if(arr[j]==2){
    //         j--;
    //     }
    //     if((arr[j]==1 ||arr[j]==0) && arr[i]==2){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
     
    // }
    int firstInd=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            swap(arr[i],arr[firstInd]);
            firstInd++;
        }
    }

    int thirdInd=size-1;;
     for(int i=size-1;i>=0;i--){
        if(arr[i]==2){
            swap(arr[i],arr[thirdInd]);
            thirdInd--;
        }
    }
}
int main(){
    int arr[100]={1,1,0,0,0,0,2,2,1,0,1,1,1};
    int size=13;
sort(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}