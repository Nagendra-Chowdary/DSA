#include<iostream>
using namespace std;
int main(){
    char name[100];
    cin>>name;
    //automatically the last index after the input size will be null character-- "\0"
    //also when we hit space,tab or enter, cin will stop execution 
    // so we can't give two words in a name.only one word names.
    cout<<name<<endl;
    // name[2]='\0';
    // cout<<name<<endl;
 
 //To find length of a string

 int i=0;
 for(;name[i]!='\0';i++){}
 cout<<i<<endl;

 //To reverse the string = same method as int array.
 
}