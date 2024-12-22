
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void print(Node *&node)
{
    Node *head = node;
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

// To detect and remove a loop in the linked list

//floyd's cycle detection algorithm-- take a node slow and fast
//after some time, they will meet if there's a loop;

Node* floydd(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    if(fast==slow){
        return fast;
    //fast may not be the starting node of the loop, just any node in the loop.
    }
    }
        return NULL;
    

}

Node* getStartingNode(Node* head){
    //you can also use a map<int,bool> visited;
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floydd(head);
    if(intersection==NULL){return NULL;}
    Node* slow=head;
    while(slow!=intersection){
    slow=slow->next;
    intersection=intersection->next;

    }
    return slow;
   

}
void insertAtNode(Node* &node,int ele,int d){
    Node* temp=node;
    Node* tem=new Node(d);
    
    //if list is empty
    if(node==NULL){
       tem->next=tem;
       node=tem;
       return;
    }
    
    while(temp->data!=ele){
        temp=temp->next;
    }
    tem->next=temp->next;
    temp->next=tem;

}
int main()
{
    Node *node = new Node(9);
    Node *node2 = new Node(18);
    node->next = node2;
    Node *node3 = new Node(48);
    node2->next = node3;
    Node *node4 = new Node(10);
    node3->next = node4;
    Node *node5 = new Node(910);
    node4->next = node3;
    insertAtNode(node, 9, 8);
    insertAtNode(node, 9, 90);
    insertAtNode(node, 8, 91);
    insertAtNode(node, 9, 7);
    // cout<<floydd(node);
    // cout<<(getStartingNode(node))->data<<endl;
    // print(node);
    // node4->next = node4;
    //eliminating the loop means the last node in the loop should point 
    //to null instead of another node again which creates a loop.
    //to remove a loop
    Node* a=getStartingNode(node);
    
    Node* temp=a;
    while(temp->next!=a){
        temp=temp->next;

    }
    temp->next=NULL;
    print(node);


}