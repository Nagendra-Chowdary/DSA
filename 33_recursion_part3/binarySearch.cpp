
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int ele)
{
    // base case
    if (arr[0] > arr[n - 1])
    {
        return 0;
    }
    int mid = 0 + (n - 1 - 0) / 2;
    if (arr[mid] == ele)
    {
        return 1;
    }
    if (arr[mid] < ele)
    {
        return binarySearch(arr + mid + 1, n / 2, ele);
    }
    else
    {
        return (binarySearch(arr, mid, ele));
        //to return index also we have change the function to take arguments for
        //start and end index and we should pass the full array for every function call.
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 8, 9};
    int ele = 9;
    cout << binarySearch(arr, 6, ele) << endl;
}