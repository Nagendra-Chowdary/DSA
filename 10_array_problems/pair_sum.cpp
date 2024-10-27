#include<iostream>
using namespace std;
void pairSum(int arr[],int sum,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"["<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<"]"<<endl;
            }

        }
    } 
}
int main(){
   int arr[100]={1,2,3,4,5};
   int sum=5,size=5;
   pairSum(arr,sum,size); 
   pairSum(arr,8,size);
}