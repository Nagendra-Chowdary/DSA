#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the number:  ";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=row;col<n+row;col++){
            cout<<(char)(col+65)<<" ";

        }
        cout<<endl;
    }
}