#include<iostream>
using namespace std;
int main(){
    int arr[19]={1,2,3};
    cout<<arr<<endl;//gives the address of the first element.
    //&-- address operator
    //dereference
    // cout<<"first location address "<<&arr[0]<<endl;
    // cout<<"second location address "<<&arr[1]<<endl;

    // cout<<*arr<<endl;//first element value

    // cout<<*(arr+1)<<endl;//second element value
   //arr[i]=*(arr+i);
   //i[arr]=*(i+arr);

// cout<<2[arr]<<endl;

int *p=arr;
//same as
// int *p=&arr[0];
// cout<<p<<" "<<*p<<endl;
//mappings of variable to a memory address are stored in symbol table
//content of symbol table cannot be changed
// int arr[10];
// arr=arr+1//this is not possible;
 char ar[10]="character";
 char *po=&ar[0];
 cout<<po<<endl;//prints entire string.
cout<<static_cast<void*>(&ar[0])<<endl;
char ch[10]="abcd";
//is same as 
// char *cc="abcd";//but very risky, should never be done 


//when passing a array to a function
//it only passes the pointer pointing to the address of first element
//so you can pass a part of array also by doing this

//func(arr+i)











    
}