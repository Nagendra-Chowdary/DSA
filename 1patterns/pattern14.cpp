#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the number:  ";
    cin >> n;
    int toPrint = 0;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (char)(toPrint + 65) << " ";
            toPrint += 1;
        }
        cout << endl;
    }
}