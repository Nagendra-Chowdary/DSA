#include<iostream>
#include<queue>
using namespace std;
int solve(int *arr,int n,int k){
    deque<int> maxi(k);
    deque<int>mini(k);
    for(int i=0;i<k;i++){
        while(!maxi.empty() && arr[maxi.back()]<=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);

    }
    int ans=0;
    for(int i=k;i<n;i++){
        ans+=arr[maxi.front()]+arr[mini.front()];
        cout<<ans<<endl;
           while(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_back();
        }
        while(!mini.empty() && i-mini.front()>=k){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    ans+=arr[maxi.front()]+arr[mini.front()];
    cout<<ans<<endl;
    return ans;
}

int main(){
    queue<int> q;
    int arr[7]={2,-5,-1,7,-3,-1,2};
    solve(arr,7,3);


}