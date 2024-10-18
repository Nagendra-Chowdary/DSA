#include <iostream>
using namespace std;
// EKO problem form spoj website.
bool isPossible(int arr[], int n, int mid, int m)
{
    int yield = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            yield += arr[i] - mid;
        }
        if (yield >= m)
        {
            return true;
        }
    }
    return false;
}
int max_height(int arr[], int n, int m)
{
    // m is the meters of wood needed
    int max = INT32_MIN;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int s = 0, e = max;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, mid, m))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[100];
    int n, m;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = max_height(arr, n, m);
    cout << result << endl;
}
