//A cpp program to find the no. of set bits in two numbers;

#include<iostream>
using namespace std;
int bits(int a){
    int count=0;
     while(a){
        if(a&1){count++;}
        a>>=1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
  int total_bits=bits(a)+bits(b);    
  cout<<total_bits<<endl;
}