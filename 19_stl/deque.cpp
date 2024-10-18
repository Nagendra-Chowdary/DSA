//deque -- doubly ended queue

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    for(int i:d){
        cout<<i<<endl;
    }
    cout<<"first element "<<d.front()<<endl;
    cout<<"last element "<<d.back()<<endl;
    //to pop elements
    d.pop_back();
    d.pop_front();
    //to erase elements
    d.erase(d.begin(),d.begin()+1);
    //it erases only the first element

    //to check empty or not
    cout<<d.empty()<<endl;

    cout<<d.size()<<endl;
}