#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count=0;
//To know the number of ones present in the integer(in its binary format)
while(n){
    if(n&1){
        count++;
    }
    n>>=1;

}
cout<<count<<endl;
}