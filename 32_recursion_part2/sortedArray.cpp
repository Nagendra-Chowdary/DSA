#include <iostream>
using namespace std;
// YOu only have to think about solving the first case and the base case.
// To know whether an array is sorted, first case is checking whether
// the last element is greater than the second last element.
int checkSorted(int a[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (a[n - 1] >= a[n - 2])
    {
        return checkSorted(a, n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a[10] = {1, 2, 4, 6};
    cout << checkSorted(a, 4) << endl;
}