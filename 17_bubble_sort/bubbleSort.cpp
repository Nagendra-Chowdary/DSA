#include <iostream>
using namespace std;
//Usecase - in ith round , we are placing the ith largest element in the right place.
int main()
{
    int arr[100] = {1, 7, 6, 96, 10, 9, 14};
    int n = 7;
    bool swapped=false;
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped=true;
            }
        }
if(!swapped){
    break; //if not even one swap happens , then array is already sorted.
}
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}