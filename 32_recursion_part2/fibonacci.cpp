#include<iostream>
using namespace std;
int fibonacci(int n,int f=0,int s=1){
    int count=1;
    int term=f+s;
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    else{
    return(fibonacci(n-1)+fibonacci(n-2));}

}
int main(){
cout<<fibonacci(4)<<endl;
}