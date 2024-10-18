#include<iostream>
using namespace std;

//A program to find the element in a sorted and twisted array
// with time complexity O(logn)
int binarySearch(int arr[],int s,int e,int ele){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==ele){
            return mid;
        }
        else if(arr[mid]<ele){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return-1;
}

int searchInRotatedArray(int arr[],int n,int ele){
    int mid;
    int s=0;
    int e=n-1;
    mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    mid=s+(e-s)/2;

    }
    int ans=-1;
    if(ele>=arr[0]){
       ans= binarySearch(arr,0,e,ele);
    }
    else{
       ans= binarySearch(arr,e,n-1,ele);
    }
    return ans;
}
int main(){
    int a[100]={6,7,8,1,2,3,4};
  int res=searchInRotatedArray(a,7,4);
  cout<<res<<endl;
}