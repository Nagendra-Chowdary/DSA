#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            cout<<n-i<<" ";
        }
        cout<<"\n";
    }
}