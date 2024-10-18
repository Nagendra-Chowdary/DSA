#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
        vector<int> arr{3,4,5,1,2};
    int n = arr.size();
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            count++;
        }
        
    }
    if(arr[n-1]>arr[0]){count++;}
    if (count<=1){
        cout<<"The array is sorted and rotated"<<endl;
    }
    //In this solution, sometimes even if the array is not rotated, we are assuming that 
    //it is rotated (for (multiples of array size) times).
}

