#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//largest rectangular area in a histogram.
vector<int> nxtsmall(int arr[], int size)
{
    stack<int> s;
    vector<int> ans(size);
    s.push(-1);
    for (int i = size - 1; i >= 0; i--)
    {
    
        int a = arr[i];
        
            while (s.top()!=-1 && arr[s.top()] >=a)
            {
                s.pop();
            }
            ans[i]=s.top();
        s.push(i);
        }
    return ans;
}
vector<int> prevsmall(int arr[], int size)
{
    stack<int> s;
    vector<int> ans;
    s.push(-1);
    for (int i = 0; i <= size - 1; i++)
    { 
        int a = arr[i];
        
            while (s.top()!=-1 && arr[s.top()] >=a)
            {
                s.pop();
            }
        cout<<i<<endl;
            ans.push_back(s.top());
        s.push(i);
        }
    
    return ans;
}

int largestRectangleArea(int arr[],int size){
      vector<int> nxt=nxtsmall(arr,size);
      vector<int> prev=prevsmall(arr,size);
      int area=INT16_MIN;
      for(int i=0;i<size;i++){
        int l=arr[i];//length
        if(nxt[i]==-1){
            nxt[i]=size;
        }
        int b=nxt[i]-prev[i]-1;
        int newArea=l*b;
        area=max(area,newArea);

      }
      return area;


}


int main(){
int arr[90]={1,3,2,4,5,3,6};
int size=7;
int area=largestRectangleArea(arr,size);
cout<<area<<endl;
}