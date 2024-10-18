#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:  ";
    cin >> n;
    for (int row = 1; row < n+1; row++)
    {
        for (int col = row; col < 2 * row; col++)
        {
            cout << (char)(col + 65-1) << " ";
        }
        cout << endl;
    }
}