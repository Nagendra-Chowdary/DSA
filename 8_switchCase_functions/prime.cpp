//A cpp program to find whether a number is prime or not

#include<iostream>
using namespace std;
bool isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    cin>>a;
    cout<<isPrime(a)<<endl;

}