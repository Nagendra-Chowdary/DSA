#include <iostream>
#include <queue>
#include <map>
using namespace std;
// in a stream of characters, each time a
// character is inserted ,the output should be first non repeating character
//in the whole string.if a new character is added that makes the
//current first non repeating character invalid , we have to make sure it changes.

string firstNonRepeating(string a)
{
    map<char, int> count;
    queue<int> q;
    string ans = "";
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        count[ch]++;
        q.push(ch);
        cout<<ch<<endl;
        cout<<q.front()<<endl;
        while (!q.empty())
        {

            if (count[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}
int main()
{
    string na="aabbcde";
    string ans=firstNonRepeating(na);
    cout<<ans<<endl;
}