#include<iostream>
using namespace std;
void digits(int num,string arr[]){
    if(num==0){
      return;
    }
int digit = num%10;
num=num/10;
digits(num,arr);
cout<<arr[digit]<<endl;

}

int main()
{string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  int num=12308;
 digits(num,arr);
}