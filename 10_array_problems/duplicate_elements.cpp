#include<iostream>
using namespace std;
//given an array with n elements will have numbers
//from 1 to n-1 and a number b/w 1 and n-1 once more . 
//we have to find that number.
int duplicateElement(int arr[],int size){
    int ans=0;
    //we know that xor of an element with itself is zero.
    // and we also know that the array contains 1 to size-1 elements
    // so we xor all elements with numbers from 1 to n-1
    //1^2^3^4^5....N-1^3 ^ 1^2^3^4...N-1 will give
    //3(same elements will get cancelled.)
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    for(int i=1;i<size;i++){
        ans^=i;
    }
    return ans;
}
int main(){
int arr[100]={1,2,3,4,5,6,5,7};
int size=8;
cout<<duplicateElement(arr,size)<<endl;

}