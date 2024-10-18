/* pass by value means the value passed is
copied into the dummy variable 
that we specified in the function declaration
now whatever we do with the value in the function 
will not affect the original variable
in the main function. */


#include<iostream>
using namespace std;
 int power(int a,int b){
 int ans=1;
 for(int i=0;i<b;i++){
    ans*=a;
 }
 return ans;
 }
int main(){
    int num,pow;
    cin>>num>>pow;
int a=power(num,pow);
cout<<a<<endl;
cout<<power(4,4)<<endl;
cout<<power(4,3)<<endl;

}
