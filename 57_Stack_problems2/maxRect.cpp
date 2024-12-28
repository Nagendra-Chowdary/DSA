#include <iostream>
#include <vector>
#include <stack>
using namespace std;
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
int maxRect(int a[3][3],int n){
 int area= largestRectangleArea(a[0],n);
      for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=0){
                a[i][j]+=a[i-1][j];

            }
            else{
                a[i][j]=0;
            }

        }
        area=max(area,largestRectangleArea(a[i],n)); 
      }
      return area;
}
int main(){
    int a[3][3]= {
        {0,1,1},
        {1,1,1},
        {0, 0, 0}
    };
int area=maxRect(a,3);
cout<<area<<endl;
}