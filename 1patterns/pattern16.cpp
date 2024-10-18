#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:  ";
    cin>>n;
    for(int row=1;row<n+1;row++){
        for(int col=n-row;col<n;col++){
            cout<<(char)(col+65)<<" ";

        }
        cout<<endl;
    }
}