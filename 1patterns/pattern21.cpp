#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number:  ";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}