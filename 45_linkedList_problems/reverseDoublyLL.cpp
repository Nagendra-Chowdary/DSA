#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

//reversing a doubly linked list using recursion

Node* reverseLL(Node* head){
    if(head->next==NULL){
        return head;
    }
    Node* rem=reverseLL(head->next);
    (head->next)->next=head;
    head->next=NULL;
    return rem;
}

void print(Node *&head)
{
    Node *node = head;
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

int main(){
Node* node=new Node(1);
Node* node2=new Node(2);
node2->prev=node;
node->next=node2;
Node* r=reverseLL(node);
print(r);
}