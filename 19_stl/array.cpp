//array -- implementation is same as our basic static array.(not dynamic)
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5> a={1,2,3,4,5};
//to get size, same as normal array:
cout<<a.size()<<endl;


cout<<a[3]<<endl;
//we can also write above as
cout<<a.at(0)<<endl;
//to check whether the array is empty or not
cout<<a.empty()<<endl;
//to get the first element of the array
cout<<a.front()<<endl;
//to get the last element
cout<<a.back()<<endl;

}


