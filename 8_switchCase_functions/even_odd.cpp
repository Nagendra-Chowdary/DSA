#include<iostream>
using namespace std;
 bool isEven(int a){
 return((a%2)?0:1);
 }
int main(){
    int num;
    cin>>num;
int a=isEven(num);
cout<<a<<endl;
cout<<isEven(4)<<endl;
cout<<isEven(5)<<endl;

}
