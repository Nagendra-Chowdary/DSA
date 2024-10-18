#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(23);
    v.push_back(44);
    v.push_back(46);
    v.push_back(90);
    cout<<binary_search(v.begin(),v.end(),9)<<endl;
    cout<<binary_search(v.begin(),v.end(),2)<<endl;
    cout<<binary_search(v.begin(),v.end(),23)<<endl;
    cout<<binary_search(v.begin(),v.end(),4)<<endl;
    cout<<binary_search(v.begin(),v.end(),46)<<endl;
    cout<<upper_bound(v.begin(),v.end(),46)-v.begin()<<endl;
    cout<<lower_bound(v.begin(),v.end(),46)-v.begin()<<endl;
    //the above both will give you the iterator pointing to the index closest to the
    //element .we can't print the iterator but when we subtract v.begin() from it , it gives index.
    int a=9,b=8;
    cout<<max(5,6)<<endl;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;
    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
        vector<int> u(v);
  rotate(u.begin(),u.begin()+1,u.end());
  for(int i:u){
    cout<<i<<endl;
  }
  sort(u.begin(),u.end());
  //this sort is based on intro sort which is a
  //combination of three sorts - heap sort, quick sort and insertion sort.
  //
  for(int i:u){
    cout<<i<<endl;
  }
}