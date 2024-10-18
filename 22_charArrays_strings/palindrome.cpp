#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char name[100];
    cin>>name;
    int i=0;
for(;i<n/2;i++){
if(name[i]!=name[n-1-i]){
    cout<<false<<endl;
    break;}
}
if(i==n/2){
    cout<<true<<endl;
}

}