#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i=0,ans=0,digit;
    cout<<"Enter the number: ";
    cin>>n;
   while(n!=0){
    digit=n%10;
    ans+=digit*pow(2,i);
    n/=10;
    i++;

   }
cout<<"Answer: "<<ans<<endl;
}
