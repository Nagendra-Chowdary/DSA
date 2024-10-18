#include <iostream>
#include<math.h>
using namespace std;

int main(){

int arr[6]={1,2,2,1,1,3};
int ans=0;
        int size=sizeof(arr)/sizeof(int);
        cout<<size<<endl;
        int count;
        int ele;
        int arrr[size];
        for(int i=0;i<size;i++){
          count=0;
            ele=arr[i];
           for(int j=0;j<size;j++){
            if(ele==arr[j]){
                count++;
            }
           } 
           arrr[i]=count;
           cout<<count<<endl;
        }

          //  ans^=count;
        //    if(!ans){


return 0;

}
 // if you have a switch case in a loop , you can't use break to get out
 // you shall use exit(0) where 0 generally means success and other num means 
 // some error
//}


// int main(){




//   //A sample calculator program
//   int n,m;
//   char op;
//   cin>>n>>m>>op;
// // cout<<5%3<<endl;
// switch (op)
// {
// case '+'/* constant-expression */:cout<<(n+m)<<endl;
//   /* code */
//   break;

// default:cout<<"enter a valid operator \n";
//   break;
// }


//}

//to check whether the number is a power of two


//   int n;
//   cin>>n;
//   int c=0;
//   int ans=1;
//   for(int i=1;i<31;i++){
//     ans=ans*2;
//    if( (ans==n)){
//     cout<<"2 power "<<i<<endl;
//     break;
//    }
//    c++;
//   }
// if(c==30){
//   cout<<"No \n";
// }

//alternate code
//if ((n&(n-1))==0){return true;}
// }
// int main()
// // {


// // int a=5;
// // int b=~a;
// // int n=0;
// // int i=0,d=0;
// {
//  //Complement of a base 10 integer
//  int n;
//  cin>>n;
//  int a=n;
//  int count=0,mask=0;
//  while(n!=0){
//   mask=mask<<1;
//   mask=mask|1;
//   n>>=1;
//   count++;
//  }
// //  int a=(~n)&mask;
//  cout<<((~a)&mask)<<"  "<<endl;
 
 





// }
    // cout << "Hello World!" << endl;
    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8}; // answer={1,5,2,6,3,7,4,8}
    // int answer[8];
    // int n = 4;
    // // for(int i=0,j=0;i<2*n;i=i+2,j++){
    // //     answer[i]=a[j];
    // //     answer[i+1]=a[j+n];

    // // }
    // //  for(int i=0,j=0;i<n;i=i+2,j++){
    // //     answer[i]=a[j];
    // //     answer[i+1]=a[j+n];
    // //     answer[i+n]=a[j+2];
    // //     answer[i+n+1]=a[j+2+n];
    // // }

    // for (int i = 0; i < n; i++)
    // {
    //     answer[2 * i] = a[i];
    //     answer[2 * i + 1] = a[i + n];
    // }
    // for (int i = 0; i < 8; i++)
    // {

    //     cout << answer[i] << endl;
    // }
  //   int n;
  // cout<<"enter the number";
  // int arr[]={1,2,3,4,5,4};
  // cout<<sizeof(arr)/4<<endl;
  // int len=sizeof(arr)/4;
  // for(int i=0;i<len;i++){
  //   arr[i]+=n;
  //   if
  // }

//   int n;
//   cout<<"Enter the number \n";
//   cin>>n;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<=2*n;j++){

//       (j<=i )?cout<<j<<" ":((2*n-j<i)?cout<<2*n-j<<" ":cout<<i<<" ");
//     }
//    cout<<endl;
    
//   }
//   for(int i=n;i>=0;i--){
//     for(int j=0;j<=2*n;j++){

//       (j<=i )?cout<<j<<" ":((2*n-j<i)?cout<<2*n-j<<" ":cout<<i<<" ");
//     }
//    cout<<endl;
    
//   }
// }