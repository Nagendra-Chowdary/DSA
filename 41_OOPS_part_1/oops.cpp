#include<iostream>
// #include "Hero.cpp";
//padding
//greedy alignment
using namespace std;
class Hero
{
    private:

    int health;
    char level;
    public:
    static int timeToDo;
    Hero(int health,char level){ //this is a pointer to the object which called the  constructor.
        this->health=health;
        cout<<"Invoked"<<endl;
    }
    Hero(int health){ //this is a pointer to the object which called the  constructor.
        this->health=health;
        cout<<"Invoked"<<endl;
    }
   Hero(Hero& obj){// becoz we have to pass by reference not a copy of the object
    this->health=obj.health;
    this->level=obj.level;
   }
    //one of two constructors will be called based on params.
    int getHealth(){
        return health;
    }
    void setHealth(int input){
        health=input;
    }
    static int random(){
         return timeToDo;
    }
    ~Hero(){
        cout<<"Hi"<<endl;
    }
};
int Hero::timeToDo=7;
int main()
{
//when we create an object, constructor will be called/invoked
//it has no input param or return type.
//Hero h ----- >   h.Hero() this is constructor.
//you can also make parameterised constructor and a copy constructor.
Hero h(2,'A');
cout<<h.getHealth()<<endl; 
//copy constructdor is built in.
Hero a(h);
//or
//Hero a=h;
cout<<a.getHealth()<<endl; 
//copy constructor will do shallow copying.
//if the original object values change , the copied obj will also change.
//shallow copy means you are just accessing the same memory location 
//with different names (objects)
//If we use our copy constructor, it will do deep copying.
// where a new memory location will be given for new obj and just value of
// the object will be given from the main obj.

//copy assignment operator
Hero h1(35,'A');
Hero h2(45,'H');
h2=h1;
//all values of h2 will be changed.


//destructor is same as constructor
// it is used to deallocate memory at the end of class
//the only diff is ~

// it will be called automatically for static allocation
// but for dynamic, you have manually
//delete h;


//static keyword belongs to class  , you don't have to create an obj to access it.
cout<<Hero::timeToDo<<endl;
cout<<Hero::timeToDo<<endl;
cout<<Hero::random()<<endl;
cout<<Hero::timeToDo<<endl;
// Hero h;
//dynamically 
// Hero* h=new Hero;
// cout<<sizeof(h)<<endl;
// //size of an object is sum of all the properties present in the class
// //it will be one if there are none.

// (*h).setHealth(90);
// cout<<(*h).getHealth()<<endl;
// cout<<h->getHealth()<<endl;
// cout<<h.level<<endl;
//Access modifiers - public , private and protected.
/*

By default it is set private.
private members can only be accessed inside the class.
public anywhere.

*/
}
