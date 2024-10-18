#include <iostream>
using namespace std;
// an array is given with size n and the elements will
//  only be in the range of 1 and n;
// some elements occur twice, we have to find those.
void duplicates(int arr[], int size)
{
    // we have the range 1 and n-1 so every element in this array
    // will be less than the size of the array. so that means that every element
    // in the array must also be an index for any other element in this array.
    // so we iterate through the loop, for every element e, we will make
    // arr[e-1] negative. before that ,we will check whether its negative
    // if we encounter a element for which the arr[element-1 ] i
    // is already negative, then it means that we encountered that element be
    // before and converted the arr[element-1] into negative ,the element is repeated.

    int a[100];
    int element;
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        element = arr[i];

        if (arr[element - 1] < 0)
        {
            a[c] = element;
            c++;
        }
        else
        {
            arr[element - 1] *= (-1);
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100] = {1, 2, 3, 2, 5, 4, 3};
    int size = 7;
    duplicates(arr, size);
}