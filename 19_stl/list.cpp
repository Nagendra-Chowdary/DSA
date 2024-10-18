#include<iostream>
//it uses doubly linked list for implementation
#include<list>
using namespace std;

int main(){
    list<int> l;
     l.push_back(1);
     l.push_front(2);
        for(int i:l){
        cout<<i<<endl;
    }
    l.erase(l.begin());//removes the first element.
    cout<<l.size()<<endl;
    list<int> l2(l);
    list<int> l3(6,0);
   
}