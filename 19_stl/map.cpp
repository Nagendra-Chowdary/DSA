//a set of unique key-value pairs
#include<iostream>
#include<map>

using namespace std;
int main(){
map<int,string> m;
m[7]="Nagella";
m[17]="Nagendra";
m[71]="Nagendra Chowdary";
m.insert({6,"Nagu"});
for(auto i:m){
    cout<<i.first<<i.second<<endl;
}
cout<<m.count(6)<<endl;
m.erase(6);
cout<<m.count(6)<<endl;
auto it=m.find(17);
for(auto i=it;i!=m.end();i++){
cout<<(*i).first<<endl;

}
}