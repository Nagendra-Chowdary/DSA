#include<iostream>
using namespace std;
void update1(int n){
    n++;
}
void update2(int& n){//pass by reference
    n++;
}
int main(){
    int a=18;
//    int& j=a;//same memory location , two variables.
   
   cout<<a<<endl;
   update1(a);
   cout<<a<<endl;
   update2(a);
   cout<<a<<endl;
    int n;
    // cin>>n;
    // int arr[n];
    //This is a very bad practice
    //because the size should be known during compilation and not during runtime.
    //during compile time n will be a garbage value and unpredictable.
    //moreover an array can't be initialized with an undefined variable(even if it has a garbage value) 

    //using stack memory- static allocation
    //heap memory- dynamic memory allocation
    //using keyword new.
    new int;
    //IN heap memory is allocated and array is initialized during runtime and not compile time.
    //in heap you can't give name,only data type;
    //the above line will return an address where memory is allocated
    //we can use pointers to assign a name to the address and use it.
    int *i=new int;//this will take 8 bytes in stack for pointer and 4 byte in heap for int.
    *i=119;
    cout<<*i<<endl;
    //for array
    int* arr=new int[5];
    arr[1]=9;
    cout<<arr[1]<<endl;
//if we are creating a variable in a loop,
//static allocation will be freed after every loop automatically
//but heap memory has to be freed manually
delete i;
delete []arr;
}