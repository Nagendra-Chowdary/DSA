//A cpp program to calculate ncr value 
// if input is 8c2 the ncr value = 8!/(2! x (8-2)!)

#include<iostream>
using namespace std;

int fact(int a){
    int ans=1;
    while (a!=0){
        ans*=a;
        a--;
    }
    return ans;
}

int ncr(int a,int b){
    return(fact(a)/(fact(b)*(fact(a-b))));
}

 int main(){
   
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;


 }