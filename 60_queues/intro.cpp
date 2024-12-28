#include <iostream>
#include <queue>

// class queue
// {
//  public:



// };

using namespace std;

// QUEUE
// FIFO
// push in the rear
// pop from the front
int main(){
    queue<int> q;
    q.push(8);
    q.push(18);
    q.push(82);
    q.push(38);
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.empty();
}