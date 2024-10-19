#include <iostream>
// #include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9,};
    int n=3,m=3;
    int count=0;
      int strow=0,stcol=0,enrow=n-1,encol=m-1;
        //    cout<<strow<<" "<<encol<<endl;
        //       cout<<a[strow+1][encol]<<endl;

    while(count<9){
      for(int i=stcol;i<=encol && count<n*m;i++){
        cout<<a[strow][i];
        count++;
      }
      cout<<endl;
      strow++;
      for(int i=strow;i<=enrow && count<n*m;i++){
        cout<<a[i][encol]<<endl;
        count++;
      }
      encol--;
      for(int i=encol;i>=stcol && count<n*m;i--){
        cout<<a[enrow][i];
        count++;
      }
            cout<<endl;

      enrow--;
      for(int i=enrow;i>=strow && count<n*m;i--){
        cout<<a[i][stcol]<<endl;
        count++;
      }
      stcol++;

    }

}

