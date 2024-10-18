#include<iostream>
using namespace std;
int linearSch(int arr[],int size,int ele){
    int a;
for(int i=0;i<size;i++){
    if(arr[i]==ele){
        return 1;
    }
    
}
return 0;
}
int main(){
    int arr[90]={1,2,-3,4,5,6,1};
    int sze=7;
    int ele;
    cout<<"Enter the search element \n";
    cin>>ele;
    cout<<(linearSch(arr,sze,ele)?("key is present"):("key is not present"))<<endl;
}