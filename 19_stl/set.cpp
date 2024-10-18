//immutable
//returns elements in sorted order (in ordered set)
//stores only unique elements
#include<iostream>
#include<set>

using namespace std;
int main(){

set<int> s;
s.insert(5);
s.insert(5);
s.insert(6);
s.insert(7);
s.insert(5);
s.insert(2);

for(int i:s){
    // cout<<i<<endl;
}
set<int>::iterator it=s.begin();
// cout<<*it<<endl;
set<int>::iterator itr=s.find(5);
for(auto a=itr;a!=s.end();a++){
   cout<<*a<<endl;
}
// cout<<*itr<<endl;
//To know whether an element is present in the set or not
cout<<s.count(5)<<endl;








}