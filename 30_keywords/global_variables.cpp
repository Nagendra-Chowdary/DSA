#include <iostream>
using namespace std;
//Global variables-- variables sharing same memory location ,just like reference variables
//

int a=0;
//this variable is a global variable and can be accessed and  updated from anywhere.
//bad practise

//inline functions--just like macros , but the body of the function will get replaced.
//making a func inline is just a suggestion to the compile which will decide based on the size and 
//complexity of the function.(one line funcs will become inline mostly.)
//it helps with less space allocation and less performance hit.
//we can even use reference variables as arguments to avoid extra space allocation.
inline int add(int a,int b){
    return a+b;
}

int main(){
int a=9;
cout<<a<<endl;
cout<<add(a,a+2)<<endl;


}