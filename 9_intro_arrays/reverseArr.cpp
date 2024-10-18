#include<iostream>
using namespace std;
void reverse(int arr[],int siz){
    int temp;
    for(int i=0;i<(siz/2);i++){
    // temp=arr[i];
    // arr[i]=arr[siz-i-1];
    // arr[siz-i-1]=temp;
    swap(arr[i],arr[siz-i-1]);
    }
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
    for(int i=0;i<siz;i++){
        cout<<arr[i];
    }
    cout<<endl;
    reverse(arr,siz);
    for(int i=0;i<siz;i++){
        cout<<arr[i];
    }
    cout<<endl;


}