#include <iostream>
using namespace std;
// Faster than all other sorting algorithms.

void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    for(int i=0;i<len1;i++){
        arr1[i]=arr[s+i];

    }
    for(int i=0;i<len2;i++){
        arr2[i]=arr[mid+1+i];

    }
    int i=0,j=0,ind=s;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[ind++]=arr1[i++];
            
        }
        else{
            arr[ind++]=arr2[j++];

        }
    }
    while(i<len1){
         arr[ind++]=arr1[i++];
    }
    while(i<len1){
         arr[ind++]=arr2[j++];
    }


}

void mergeSort(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    else{
        int mid=s+((e-s)/2);
        mergeSort(a,s,mid);
        mergeSort(a,mid+1,e);
        merge(a,s,e);
    }
}
int main()
{
    int arr[50]={3,44,12,123,6,4,1,2,5};
    int n=9;
    mergeSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    
}