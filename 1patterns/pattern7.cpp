#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:  ";
    cin >> n;
    for (int row = 1; row < n + 1; row++)
    {
        for (int col = row; col < row * 2; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}