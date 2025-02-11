#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

//Hash map is a data structure.
//widely used in development because of its
// low time complexities for insert/del/search operations;


int main(){
//creation
unordered_map<int,int> map;
map[0]=1;
map['a']='n';
//insertion
unordered_map<string,int> mapp;
pair<string,int> p= make_pair("babbar",3);
mapp.insert(p);
//searching
cout<<mapp["babbar"]<<endl;//OR
cout<<mapp.at("babbar")<<endl;
cout<<mapp["bb"]<<endl;//==ERROR 
cout<<mapp.at("bb")<<endl;// will give zero; 
//size
cout<<mapp.size()<<endl;
//to check presence
cout<<mapp.count("babbar")<<endl;//will give 0 or 1
//erase
mapp.erase("babbar");

//print
for(auto i:mapp){
    cout<<i.first<<" "<<i.second<<endl;
}

//iterator
unordered_map<string,int>::iterator it=mapp.begin();
while(it!=mapp.end()){
    cout<<it->first<<" "<<it->second<<endl;
}
}