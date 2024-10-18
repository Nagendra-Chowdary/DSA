#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    int nextNumber;
    cout<<"Enter the number:  ";
    cin>>n;
    for(int i=0;i<n;i++){
    nextNumber=a+b;
    a=b;
    b=nextNumber;
    cout<<nextNumber<<" ";
    }
}