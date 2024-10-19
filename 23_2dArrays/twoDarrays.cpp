#include <iostream>
// #include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[20][10];
    //to take row wise input
    for(int i=0;i<20;i++){
        for(int j=0;j<10;j++){
            cin>>a[i][j];
        }
    }
    //To take column wise input
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            cin>>a[j][i];
        }
    }

    //to use binary search in two d arrays
    // is same as one d array
    //just remember that s=0 and e=rows*cols-1;

}