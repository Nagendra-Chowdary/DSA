#include<iostream>
using namespace std;
//Allocate books to given no. of students
//you are given an array with each element as no. of pages in that book
//we have assign books in such a way that the max no. of pages assigned to a student is as low as possible.
// we can only assign contiguous books to a student.
//m is no. of students.
bool isPossible(int arr[],int size,int m,int mid){
    int sum=0;
    int studentCount=1;
    for(int i=0;i<size;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>mid || arr[i]>mid){
                return false;

            }
            sum=arr[i];
        }
    }
    return true;
}
int allocateBooks(int arr[],int size,int m){ 
int sum=0;
for(int i=0;i<size;i++){
sum+=arr[i];
}
int s=0;
int e=sum;
int mid;
while(s<e){
    mid=s+(e-s)/2;
    if(isPossible(arr,m,mid,size)){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return mid;
}
int main(){
int a[100]={1,2,3,4};
int res=allocateBooks(a,4,2);
cout<<res<<endl;
}