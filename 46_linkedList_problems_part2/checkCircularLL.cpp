#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
//approach -1 take a simple while loop with next = null and next==value of head (you know).
//also consider the case of only one node.

//you can also use an array for visited or a data structure called map
//but not better than the first approach.
//floyds cycle detection algorithm


int main(){
Node* head=new Node(1);
Node* node2=new Node(2);
head->prev=node2;
head->next=node2;
node2->next=head;
node2->prev=head;

}