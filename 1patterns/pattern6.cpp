#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the number";
    cin>>n;
    int toPrint=1;
    for(int row=1;row<n+1;row++){
        for(int col=1;col<row+1;col++){
            cout<<toPrint<<" ";
            toPrint+=1;
        }
        cout<<"\n";
    }
}