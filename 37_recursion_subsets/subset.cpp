#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>& ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums,output,index+1,ans);

    int element=nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}
vector<vector<int>> subset(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;

}
int main(){

vector<int> nums={1,2,3};
vector<vector<int>> ans=subset(nums);
cout<<ans.size()<<endl;

for(vector<int> i:ans){
    for(int a:i){
        cout<<a;
    }
    cout<<endl;
}

}


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> a={{2,3,4},{1,2,3}};
//     for(int i:a[0]){
//     cout<<i<<endl;
//     }
//     // a.push_back(4);
//     // cout<<a[3]<<endl;
//     // a.pop_back();
// }
