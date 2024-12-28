#include <iostream>
#include <stack>
using namespace std;

// to get min value
// whe

// write getMin() with O(1) in time and space complexity

// stack is a data structure that follows LIFO.
class superStack
{
public:
    stack<int> s;
    int mini = INT16_MAX;
    void push(int ele)
    {
        if (s.empty())
        {
            s.push(ele);
        }
        else
        {
            if (ele < mini)
            {
                s.push(2 * ele - mini);
                mini = ele;
            }
            else
            {
                s.push(ele);
            }
        }
    }
    int pop()
    {
        if (s.empty())
        {
            return -1;
        }
        else{
            if(s.top()>mini){
                s.pop();

            }
            else{
                mini=2*mini-s.top();
                s.pop();
            }
        }
    }
    int top(){
        if(s.empty()){
           return -1;
        }
        else{
            if(s.top()<mini){
              return mini;
            }
            else{
                return s.top();
            }
        }
    }
    int getMin(){
        if(s.empty()){
           return -1;
        }
        else{
            return mini;
        }
        
    }
};

int main()
{
    stack<int> s;
    s.push(9);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(90);
    s.pop();
}