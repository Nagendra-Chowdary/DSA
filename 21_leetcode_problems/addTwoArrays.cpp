
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[10] = {11, 23};
    int arr2[10] = {12, 3, 9};
    int m = 2, n = 3;
    int i = m - 1, j = n - 1;
    int sum[10], carry = 0, ind = 0;
    while (i >= 0 || j >= 0)
    {
        
        if (i < 0)
        {
            arr1[i] = 0;
        }
        if (j < 0)
        {
            arr2[j] = 0;
        }
        sum[ind] = (arr1[i] + arr2[j] + carry) % 10;
        carry = (arr1[i] + arr2[j] + carry) / 10;
        ind++;
        i--;
        j--;
    }
    if(carry){sum[ind]=carry;ind++;}

    //To reverse the array

    for (int i = 0; i < (ind) / 2; i++)
    {
        swap(sum[i], sum[(ind) - 1 - i]);
    }

    //To print the array

    for (int i = 0; i < ind; i++)
    {
        cout << sum[i] << " ";
    }
    cout << endl;
}