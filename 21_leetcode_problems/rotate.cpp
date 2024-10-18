#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

    vector<int> arr{1, 2, 3, 4};
    int n = arr.size();

    int r;
    int temp;
    cin >> r;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
      ans[(i+r)%n]=arr[i];
    }
    // for(int i=0;i<r;i++){
    //      temp=arr[n-1];
    //     for(int j=n-1;j>0;j--){
    //         arr[j]=arr[j-1];

    // }
    //     arr[0]=temp;
    // cout<<"array for "<<i+1<<"th"<<" rotation"<<endl;
//        for(int i:arr){
//         cout<<i<<endl;
//     }
// }

       for(int i:ans){
        cout<<i<<endl;
    }
    }
 
