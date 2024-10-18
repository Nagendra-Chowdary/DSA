//vector is a dynamic array
//it also has contigous memory
//whenever you want to add an element exceeding the
//size of a vector, it immediately creates a new vector double the size
//and copies all the elements to the new vector and dumps the old vector.
//initially when the vector is created, its capacity or size is zero.
//capacity doubles everytime you add a new element .
//size means no. of elements and capacity means how much memory allocated.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v2={4,3,2,1};
    vector<int> v(4,1);
    //a vector with four ones.
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
vector<int> a;
cout<<a.size()<<" "<<a.capacity()<<endl;
a.push_back(2);
cout<<a.size()<<" "<<a.capacity()<<endl;
a.push_back(1);
cout<<a.size()<<" "<<a.capacity()<<endl;
a.push_back(3);
cout<<a.size()<<" "<<a.capacity()<<endl;
//to remove the last element
a.pop_back();
//to get the first and last elements of the vector
cout<<a.front()<<" "<<a.back()<<endl;
//To copy a vector
vector<int> last(v);
for(int i=0;i<last.size();i++){
        cout<<last[i]<<" "<<endl;
    }

//we can also iterate through the vector like this:
for(int i:last){
    cout<<i<<endl;
}
//To clear vector
v.clear();
}