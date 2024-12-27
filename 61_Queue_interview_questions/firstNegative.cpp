//first negative integer in a 2 size window, in an array.

#include<iostream>
#include<queue>
using namespace std;
//approach ---
/*
a double ended 
*/

 
int main(){
deque<long long int> dq;
vector<long long > ans;
int a[9]={-1,2,-3,-3,4};
int size=5;
int k=2;
for(int i=0;i<k;i++){
    if(a[i]<0){
    dq.push_back(i);
    }
}
if(dq.size()>0){
    ans.push_back(a[dq.front()]);
}else{
    ans.push_back(0);
}

for(int i=k;i<size;i++){
    if(!dq.empty() && i-dq.front()>=k){
        dq.pop_front();
    }
    if(a[i]<0){
        dq.push_back(i);
    }
    if(dq.size()>0){
        ans.push_back(a[dq.front()]);

    }
    else{
        ans.push_back(0);
    }
}

}