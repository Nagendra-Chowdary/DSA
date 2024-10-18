#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int toPrint = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << n * n - toPrint << " ";
            toPrint += 1;
        }
        cout << "\n";
    }
}