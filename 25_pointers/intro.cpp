#include<iostream>
using namespace std;
int main(){
//address is in hexadecimal
int a=9;
// cout<<&a<<endl;
//pointer stores the address.
int *ptr=&a;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;

//pointer has to be same type as the variable
// char c='a';
// char *p=&c;
// cout<<*ptr<<endl;
// //the pointer is working fine for int 
// //but for char , we had to use this.
// cout<<static_cast<void*>(&c)<<endl;

cout<<"size of pointer is "<<sizeof(ptr)<<endl; //same for every date type.
int *pp;
//pointer is created and it is pointing to a garbage value
//it means it holds a random address in memory
//this will cause unexpected results and segmentation faults.
//It is a dangerous thing , should not be done.


int *ppp=0;
//this is a null pointer.you can assign it to any variable if you want.
ppp=&a;
//to copy a pointer
int *pq=ppp;
pq++;//pq moves to next 4 bytes location (becoz it has data type integer).

int **dp=&ppp;
//this is a double pointer that stores the address of another pointer.

//void pointer -- can be used to point any data type.
//but cannot be dereferenced directly without typecasting
void *ptrr;
int aa=9;
ptrr=&aa;
cout<<*(int*)ptrr<<endl;
}