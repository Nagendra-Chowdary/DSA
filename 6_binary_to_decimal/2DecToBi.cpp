#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int i = 0;
    int ans = 0, digit = 0;
    // while (n != 0)
    // {
    //     digit = n % 2;
    //     n = n / 2;
    //     ans = ans + (digit * pow(10, i));
    //     i++;
    // }
    // cout << "Answer: " << ans << endl;

    //For negative decimal

    if (n<0){n*=-1;}
    while (n != 0)
    {
        digit = n % 2;
        n = n / 2;
        ans = ans + (digit * pow(10, i));
        i++;
    }
    i=0;
    cout << "Answer: " << ans << endl;
    int c=0;
    while(ans!=0){
        digit=ans%10;
        digit=digit?0:1;
        i=i+digit*pow(10,c);
        c++;
        ans/=10;
    }
    cout<<"(~ans) = "<<i<<endl;


    //Alternate code for bit level:
    // instead of n/2 , you can use n>>1 which basically does the same thing
    // instead of n%2, use n&1(it returns one for even number and zero for odd)
}

