#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//An array is given with positions (not sorted) no. of aggressive cows is given
//we have to find how far we can keep the aggressive cows from each other.
bool isPossible(vector<int> arr,int n,int m,int mid){
    int cowPosition=arr[0];
    int cowCount=1;
    int cowDist;
for(int i=1;i<n;i++){
 cowDist=(arr[i]-cowPosition);
 if(cowDist>=mid){
    cowCount++;
    cowPosition=arr[i];
if(cowCount>=m){
    return true;
}
 }
 
}
return false;
}
int largest_min_dist(vector<int> arr,int n,int m){
int s=0;
int e;
int ans=-1;
sort(arr.begin(),arr.end());
e=arr[n-1];
int mid=s+(e-s)/2;

while(s<=e){
 if(isPossible(arr,n,m,mid)){
    ans=mid;
    s=mid+1;
 }
 else{
    e=mid-1;
 }
 mid=s+(e-s)/2;
}
return ans;
}
int main(){
vector<int> arr={1,2,3};
int result=largest_min_dist(arr,3,2);
cout<<result<<endl;
}