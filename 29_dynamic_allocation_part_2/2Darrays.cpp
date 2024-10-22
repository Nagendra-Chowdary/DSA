#include <iostream>
using namespace std;
int main()
{
    // int a = 1;
    // int n, m;
    // cin >> m >> n;
    // int **arr = new int *[m];
    // // an array of pointers is created (each pointer is base address for an array(to create a 2d array))
    // // so now we have m pointers, with each , we create an array of size n
    // for (int i = 0; i < n; i++)
    // {
    //     *(arr + i) = new int[n];
    //     // same as arr[i]= new int[n]
    // }
    // cin>>*(*(arr+2)+2);
    // cin>>arr[2][3];
    // cout<<(*(arr+2))[2]<<endl;
    // //to release memory
    // for(int i=0;i<n;i++){
    //     delete []arr[i];
    // }
    // delete []arr;
  

  //Jagged array --each row having different no.of columns
  int ma;
  cin>>ma;
  int** pe=new int*[ma];
  int *sizes=new int[ma];
  for(int i=0;i<ma;i++){
    int n;
    cin>>n;
    pe[i]=new int[n];
    sizes[i]=n;
    cout<<"an array of size "<<n<<endl;
  }
  for (int i=0;i<ma;i++){
    int n=sizes[i];
    cout<<"At row "<<i<<endl;
    for(int a=0;a<n;a++){
cout<<"input element no."<<a<<endl;
        cin>>pe[i][a];
    }
   
  }
  for (int i=0;i<ma;i++){
    int n=sizes[i];
    for(int a=0;a<n;a++){
        cout<<pe[i][a]<<" ";
    }
    cout<<endl;
  }
}