#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Everyone knows the celebrity and the celebrity knows noone
// a square matrix is given with one if a person knows the person else zero.
// the row of celebrity is all zeros
// and his column will be all ones
// regardless, the diagnol elements are always zeros.

// bruteforce approach is check every row (array)--O(n^2)

// Approach using stack O(n)
int celebrity(vector<vector<int>> arr,int n){
    stack<int> s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(arr[a][b]==1){
        s.push(b);
        }

        else if(arr[b][a]==1){
            s.push(a);
        }
       
    }
    int candidate=s.top();
    bool rowCheck=false;
    int zeroCount=0;
    for(int i=0;i<n;i++){
       if(arr[candidate][i]==0){
        zeroCount++;
       }
    }
    if(zeroCount==n){
        rowCheck=true;
    }
    bool columnCheck=false;
    int oneCount=0;
    for(int i=0;i<n;i++){
        if(arr[i][candidate]==1){
            oneCount++;
        }
    }
    if(oneCount==n-1){
        columnCheck=true;
    }
     if(rowCheck && columnCheck){
        return candidate;
     }
     else{
        return -1;
     }
}
int main()
{
    vector<vector<int>> a = {
        {0,1,1},
        {1,0,1},
        {0, 0, 0}
    };
    int n=3;
    cout<<celebrity(a,n)<<endl;
}