#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("Nagendra");
    q.push("Chowdary");
    q.push("Nagella");
    //first in first out
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;


}