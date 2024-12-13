#include<iostream>
#include<vector>
using namespace std;
//lexographical means alphabetical order.
//permutations = n!( n factorial)
void solve(vector<int> nums,vector<vector<int>>& ans,int index){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve(nums,ans,index+1);
        swap(nums[index],nums[i]);
    }
}
vector<vector<int>> permut(vector<int> nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,ans,index);
    return ans;
}
int main(){
vector<int> nums={1,2,3};
vector<vector<int>> ans= permut(nums);
for(vector<int> a: ans){
     for(int i:a){
        cout<<i;
     }
     cout<<endl;
}
}