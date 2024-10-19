#include<iostream>
#include<vector>
using namespace std;
//Sieve of Eratosthenes --An algorithm to find primes smaller than a number.
int main(){
int n;
cin>>n;
vector<bool> primes(n+1,1);
int cnt=0;
primes[0]=primes[1]=0;
for(int i=2;i<n;i++){
    if(primes[i]){
    cnt++;
    for(int j=2*i;j<n;j+=i){
        primes[j]=0;
    }
}}
cout<<cnt<<endl;
}