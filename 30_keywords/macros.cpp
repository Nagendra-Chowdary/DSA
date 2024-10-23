#include <iostream>
using namespace std;
#define pi 3.14
#define G 9.8
#define VALUE pi
#define PRINT(a){  \
  a=a+2;   \
} \
//macro is a piece of code in the program that is replaced by the value of macro.
//it will not take space in the memory it will just replace wherever the macro is used with its value
//before the code gets compiled.so no extra space is needed.
// a macro is immutable.
//macro and its types in gfg -- function like,chain like,multiline

int main()
{
cout<<VALUE<<endl;
cout<<pi<<endl;
cout<<G<<endl;
int a=5;
PRINT(a);
cout<<a<<endl;
}