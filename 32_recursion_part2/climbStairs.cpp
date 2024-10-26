#include<iostream>
using namespace std;
//No. of stairs is given .
//Each time you can climb either one step or two steps.
//we have to figure out in how many ways you can reach the top.
/*
Assume we are starting from ground 

if there are m ways to reach n-1 steps, and n ways to n-2 steps
 then to reach the nth step,
 there are only m+n ways ,you can come from either n-1 th step (the step which you can reach in m ways)
  or from n-2 step(the step which you can reach in n ways)
*/
int climbStairs(int nStairs){
    if(nStairs==1){return 1;}
    if(nStairs==2){return 2;}
    return( climbStairs(nStairs-1)+climbStairs(nStairs-2));
}
int main(){
int nStairs=5;
cout<<climbStairs(nStairs)<<endl;
}