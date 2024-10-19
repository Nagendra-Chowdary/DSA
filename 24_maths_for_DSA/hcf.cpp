#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int hcf=1;
    int mini=(a<b)?a:b;
    for(int i=2;i<=mini;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    cout<<hcf<<endl;
}
//lcm(a,b)*gcd(a,b)=a*b;
//gcb(a,b)=gcd(a-b,b)=gcd(a%b,b)

//a%m +b%m =(a+b)%m same for sub and mul.