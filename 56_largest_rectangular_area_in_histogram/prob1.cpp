#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// find the next smaller element for each element in the array.
vector<int> nxtsmall(int arr[], int size)
{
    stack<int> s;
    vector<int> ans;
    s.push(-1);
    for (int i = size - 1; i >= 0; i--)
    {
        int a = arr[i];
        if (s.top() < a)
        {
            ans.push_back(s.top());
        }
        else
        {
            while (s.top() > a)
            {
                s.pop();
            }
            ans.push_back(s.top());
        }
        s.push(a);
    }
    return ans;
}
int main()
{
    int arr[100] = {3,1, 2, 4, 5, 2};
    int size = 6;
    vector<int> ans = nxtsmall(arr, size);
    cout<<" HI"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << endl;
    }
}
