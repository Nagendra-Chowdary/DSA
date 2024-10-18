#include <iostream>
using namespace std;
//Use case : when the array is small ,when there are memory constraints.
int main()
{
    int arr[100] = {64, 12, 12, 22, 11};
    int size = 5;
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}