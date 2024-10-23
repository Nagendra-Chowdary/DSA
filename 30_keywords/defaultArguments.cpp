#include<iostream>
using namespace std;
//default argument should always start from right to left
//if you want make an argument default , all the arguments to the right has to be 
//made default.
void func(int a[],int n,int start=0){
    for(int i=start;i<n;i++){
 cout<<a[i]<<endl;
    }
}
int main(){
int b=9;
int arr[10]={1,2,3,4};
func(arr,4);

//constant variables-- value cannot be changed
//needs to be declared with a value at the time of initialisation
//otherwise it will take garbage value and we can't change it
//improves code readability,maintainability and code safety.
const int ab=5;

}