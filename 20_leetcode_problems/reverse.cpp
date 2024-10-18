#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> arr{1,2,3,4};
    int n=arr.size();
    // reverse(arr.begin(),arr.end());
    for(int i=0;i<n/2;i++){
      swap(arr[i],arr[n-1-i]);
    }
    for(int i:arr){
        cout<<i<<endl;
    }
}