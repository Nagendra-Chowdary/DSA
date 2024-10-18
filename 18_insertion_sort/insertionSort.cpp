#include <iostream>
using namespace std;
//it is adaptive and stable
//time complexity worst case -O(n^2)
//best case O(n)
int main()
{
    int arr[100] = {11,45, 2, 34, 23, 5,67,78,44,5};
    int n = 10;
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;
        for (; j >=0; j--)
        {
            if (arr[j] > temp)
            {
                   arr[j+1]=arr[j];             
            }
            else{
                
                break;}
            
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}





