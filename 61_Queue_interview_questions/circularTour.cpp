#include <iostream>
#include <queue>
#include <map>
using namespace std;
/*
In an array of pairs ==petrol units and distance units for next station and the 
pairs are a circular journey. after reaching to next station the remaining petrol 
adds to the next pair petrol units.we need to figure out where to start.
*/
class petrolPump{
    public:
    int petrol;
    int dist;
};
int circular(petrolPump p[],int n){
    int deficit=0,balance=0,start=0;
    for(int i=0;i<n;i++){
        balance+=p[i].petrol-p[i].dist;
        if(balance<0){
          deficit+=balance;
          start=i+1;
          balance=0;

        }

    }
    if(deficit+balance>=0){
        return start;

    }
else{
    return -1;
}
}
int main(){

}