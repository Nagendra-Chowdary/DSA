//cpp program to find out how many denominations of each note(100,50,20,1)
//we would need for the given amount.

#include<iostream>
using namespace std;
int main(){
    int amount,rs100,rs50,rs20,rs1;
    cout<<"Enter the amount \n";
    cin>>amount;
    switch (1)
    {
    case 1:
    cout<<(amount/100)<<" 100 notes \n";
    amount%=100;
    if(amount==0){break;}
case 2:
    cout<<(amount/50)<<" 50 notes \n";
    amount%=50;
        if(amount==0){break;}

    

    case 3:
    cout<<(amount/20)<<" 20 notes \n";
    amount%=20;
        if(amount==0){break;}

    case 4:
    cout<<(amount)<<" 1 notes \n";
        if(amount==0){break;}

    default:
        break;
    }
}

 // if you have a switch case in a loop , you can't use break to get out
 // you shall use exit(0) where 0 generally means success and other num means 
 // some error
//}
