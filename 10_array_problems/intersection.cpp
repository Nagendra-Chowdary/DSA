//program to find the intersection of two arrays in non decreasing order
#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    int ans[100];
    int c=0;
    while(i<n && j<m){ 
        if(arr1[i]==arr2[j]){
          ans[c]=arr1[i];
          cout<<ans[c]<<endl;
          c++;
          i++;
          j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{j++;}
    }
    if(c==0){
            cout<<"[]"<<endl;
                }
               
    
}
int main(){
    int arr1[100]={1,2,3,4,6};
    int size1=5;
    int arr2[100]={6,7};
    int size2=2;
intersection(arr1,arr2,size1,size2);
}