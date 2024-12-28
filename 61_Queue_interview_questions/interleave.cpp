//interleave the first half of queue from the second half
//  1 2 3 4 5 6
//ans-- 1,4,2,5,3,6
/*
first add half of queue to stack
321
then push them into the same queue
456321
then take each element in first half ,pop it, and push it into back
321456
Now, store the first half in stack and pop them in queue
123 == stack
456== queue
now store queue front val, pop it, push stack top in the back and push stored front val
in the back while stack is not empty.
5614
61425
142536
OVER!
*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> interleave(queue<int> q){
    stack<int> s;
    for(int i=0;i<q.size()/2;i++){

    }

}
int main(){

}