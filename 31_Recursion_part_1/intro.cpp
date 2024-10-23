#include<iostream>
using namespace std;
//Recursion -- a func calling itself
//To use recursion, we need to have a base case and a recursion relation.(and
//optionally processing in between.)
//if we don't use the base case the stack will overflow.
//if the recursive relation is at bottom == tail recursion
//if it is above processing == head recursion.
int factorial(int n){
    if(n==1 || n==0){ //base case.
        return 1;
    }
    return factorial(n-1)*n;
}
//You can do the same for the power of two


int main(){
    int n=5;
    cout<<factorial(n)<<endl;

}