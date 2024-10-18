#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:  ";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout <<j<<" ";
        }
        cout<<endl;
    }
}