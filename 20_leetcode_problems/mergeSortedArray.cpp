#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
void mergeSortedArrays(int arr[],int n,int arr2[],int n2,int ans[]){
int i=0,j=0,k=0;
while(i<n && j<n2){
    if(arr2[j]>arr[i]){
   ans[k]=(arr[i]);
   i++;
    }
    else if(arr2[j]<arr[i]){
   ans[k]=(arr2[j]);
   j++;

    }
    else{
   ans[k]=(arr2[j]);
   i++;
   j++;
 }
 k++;
}
 while(i<n){
   ans[k]=(arr[i]);
   i++;
k++;
 }
 while(j<n2){
   ans[k]=(arr2[j]);
   j++;
   k++;

 }
}

int main(){
    int arr[100]={1,34,54};
    int arr2[100]={2,3,4,6,8,9,11};

    int n=3;
    int n2=7;
    int ans[100];
    mergeSortedArrays(arr,n,arr2,n2,ans);
  for(int i=0;i<n+n2;i++){
    cout<<ans[i]<<endl;
}


//   set<int> s;
//     for(int i:arr){
//         s.insert(i);
//     }
//     for(int i:arr2){
//         s.insert(i);
//     }
//     vector<int> ans;
//     set<int>::iterator it=s.begin();

//     while(it!=s.end()){
//      ans.push_back(*it);
//      it++;
//     }
// for(int i:ans){
//     cout<<i<<endl;
// }
}