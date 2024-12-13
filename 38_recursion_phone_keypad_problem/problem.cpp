#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(string input,int index,string out,vector<string>& ans,string mapping[]){
     if(index== input.length()){
        ans.push_back(out);
        return;
     }
     int number=input[index]-'0';
     string value=mapping[number];
     for(int i=0;i<value.length();i++){
        out.push_back(value[i]);
        solve(input,index+1,out,ans,mapping);
        out.pop_back();
     }
}
vector<string> keypad(string input){
       vector<string> ans;
       string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       string out="";
       int index=0;
       solve(input,index,out,ans,mapping);
       return ans;
}
int main(){
string input="39";
vector<string> output= keypad(input);
for(string i:output){
    cout<<i<<endl;
}
}