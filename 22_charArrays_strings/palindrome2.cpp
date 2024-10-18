#include <iostream>
using namespace std;

// Check if string is a palindrome,ignore spaces and special characters.
// Consider only  numbers and alphabets.
int main()
{
    int n;
    cin >> n;
    char name[100];
    cin >> name;
    int s = 0, e = n - 1;
    bool isPalin = true;
    while (s <= e)
    {
        if ((name[s] != name[e]) &&
            !((int(name[s]) >= 32 && int(name[s]) <= 47) ||
              (int(name[s]) >= 58 && int(name[s]) <= 64) || // these are all special characters.
              (int(name[s]) >= 123 && int(name[s]) <= 126)) &&
            !((int(name[e]) >= 32 && int(name[e]) <= 47) ||
              (int(name[e]) >= 58 && int(name[e]) <= 64) || // these are all special characters.
              (int(name[e]) >= 123 && int(name[e]) <= 126)))
        {
            isPalin = false;
            
            break;
        }
        else if((name[s] == name[e])){
             s++;
             e--;
        }
        else
        {
            if ((int(name[e]) >= 32 && int(name[e]) <= 47) ||
                (int(name[e]) >= 58 && int(name[e]) <= 64) || // these are all special characters.
                (int(name[e]) >= 123 && int(name[e]) <= 126))
            {
                e--;
            }
            if ((int(name[s]) >= 32 && int(name[s]) <= 47) ||
                (int(name[s]) >= 58 && int(name[s]) <= 64) || // these are all special characters.
                (int(name[s]) >= 123 && int(name[s]) <= 126))
            {
                s++;
            }
        }
        
    }
    cout<<isPalin<<endl;
}