#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the numer  ";
    cin>>n;
    for (int row=1;row<n+1;row++){
        for(int col=1;col<row+1;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}