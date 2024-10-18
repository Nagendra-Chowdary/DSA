#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0, prod = 1, difference, numb;
    while (n >= 1)
    {
        sum += n % 10;
        prod *= n % 10;
        n = n / 10;
    }
    difference = prod - sum;
    cout << prod << " " << sum << " " << difference << endl;
}