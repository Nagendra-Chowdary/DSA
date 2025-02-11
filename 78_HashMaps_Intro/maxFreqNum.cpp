#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
//In a given array, give the most occuring number


int main(){
unordered_map<int,int> cnt;
vector<int> arr;
int maxFreq=INT16_MIN;
for(auto i:arr){
   cnt[i]++;
   maxFreq=max(maxFreq,cnt.at(cnt[i]));
}
int ans;
for(int i=0;i<arr.size();i++){
    if(maxFreq==cnt[arr[i]]){
        ans=arr[i];
        break;
    }

}
}