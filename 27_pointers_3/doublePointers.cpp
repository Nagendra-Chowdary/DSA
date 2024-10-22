#include<iostream>
using namespace std;
int main(){
    int a=1;
    int *ptr=&a;
    // int *pp=ptr;
    int **pt=&ptr;

    int arr[]={1,2,3};
    int *p=arr;
   cout<<p[2]<<endl;
   //arr++ you can't do this.
}