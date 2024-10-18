#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Nagella");
    s.push("Nagendra");
    s.push("Chowdary");
    cout << s.top() << endl;
    //last in first out
    s.pop();
    cout << s.top() << endl;
    s.push("Chowdary");
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
}
