#include<iostream>
using namespace std;

//four pillars of oops

//encapsulation-- wrapping data members and functions in an entity
//fully encapsulate class means all the datamembers are under private.

//why == data hiding,if we want we can make class read only.
//more security.

//Inheritance getting all props of a class to another class.
//in public mode:
//class a: public b{
//};
//we can say a is child class and b is parent class;
//we put all the props in the public mode of child class;

//protected is similar to private but can be accessed either inside the class or 
//through a getter func in child class.

//mode of inheritance is public in above case.

//   present in parent             mode that can be inherited(others not possible)
//    private                             all modes are not accessible(error)
//    public                              any mode
//    protected                    for public and protected == protected ,for private ,private     

/*
Types of inheritance
single inheritance - normal simple inheriance
multilevel - inheriting a class which inherited another class.
multiple - multiple parent classes inherited by a same class with just a comma . class a:public b, public c{}
Heirarchical - a class serving as a parent for multiple child classess.
Hybrid-- inheritance having more than one of the above types of inheritances.



*/

/*

Inheritance Ambiguity
if c inherits a and b, having same funcs,we don't know which func gets called 
so we use scope resolution character
obj.a::func;
*/

/*
polymorphism - existing in many forms

two types 
compile time polymorphism--
 function overloading 
 multiple functions with same name but different no. of params 
 and operator overloading
 we can overload operators also

run time polymorphism



*/
class Hero{
    public:
    int a;
    void operator+(Hero &obj){
        int val=this->a;
        int vall=obj.a;
        cout<<vall-val<<endl;
    }
    void operator()(){
       
        cout<<"bracket"<<endl;
    }
};
// class h:public Hero{

// };
int main(){
Hero h,l;
h.a=9;
l.a=8;
h+l;
h();
}