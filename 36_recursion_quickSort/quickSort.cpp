#include <iostream>
using namespace std;
//
int partition(int arr[],int s,int e){
    int count=0;
    for(int i=s;i<=e;i++){
      if(arr[s]>arr[i]){
      count++;
      }
    }
    swap(arr[s+count],arr[s]);
    
    int i=s,j=e;
    while(i<s+count && j>s+count){
        while(arr[i]<=arr[s+count]){
            i++;
        }
        while(arr[j]>=arr[s+count]){
            j--;
        }
        if(i<s+count && j>s+count){
            swap(arr[i++],arr[j--]);
        }
    }
    return s+count;
}
void quickSort(int arr[],int s,int e){
    if (s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p);
    quickSort(arr,p+1,e);
}
int main(){
int a[100]={2,3,1,44,1};
quickSort(a,0,4);
for(int i=0;i<5;i++){

cout<<a[i]<<endl;
}
}