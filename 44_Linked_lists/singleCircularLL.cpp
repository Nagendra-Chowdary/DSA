// #include<iostream>
// using namespace std;
// //two types
// //single circular  and doubly circular
// //in circular, there is no head or tail
// // we can't work with functions using index , only by comparing a given value

// //empty list -- a node pointing to itself

// class Node{
//     public:
//     int data;
//     Node* next=NULL;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
//     ~Node(){
//         if(this->next!=NULL){
//             delete next;
//             next=NULL;
//         }
//     }
// };

// //inserting at nodes is very similar to single linked lists but with comparing
// //
// void insertNode(Node* &node,int element,int d){
//         Node* newNode=new Node(d);
//     //empty list
//     if(node==NULL){
//         newNode->next=newNode;
//         return;
//     }
//     Node *temp=node;
//     while(node->data!=element){
//         temp=temp->next;
//     }
//     newNode->next=temp->next;
//     temp->next=newNode;
    
// }

// void print(Node* &node){
//     Node* temp=node;
//     do{
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
//     while(temp!=node);
//     return;
// }
// int main(){
//     // Node* node=new Node(89);
//     // node->next=node;
//     Node* node=NULL;
//     ////take null or keep the next as same node to create a single empty node.
//     insertNode(node,89,99);
//     insertNode(node,89,199);
//     insertNode(node,89,299);
//     // print(node);

// }



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=this;
    }
};

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
void print(Node* &node){
    Node* temp=node;
    do{
     cout<<temp->data<<endl;
     temp=temp->next;
    }while(temp!=node);
    // cout<<temp->data<<endl;
}
void deleteNode(Node* &node,int ele){
    if(node==NULL){
        return;
    }
    Node* temp=node->next;
    Node* tem=node;
    while(ele!=temp->data){
        temp=temp->next;
        tem=tem->next;
            }

    tem->next=temp->next;
    if(node==temp){
        node=tem;//this because if we want to call any function with node, we have to change it .
    }
    //if there is only one node
    if(temp==tem){
        node=NULL;
    }
    temp->next=NULL;
    delete temp;
}
int main(){
    Node* node=new Node(8);
    cout<<node<<"  "<<node->next<<endl;
    insertAtNode(node,8,9);
    insertAtNode(node,9,90);
    insertAtNode(node,8,91);
    insertAtNode(node,9,7);
    print(node);

    deleteNode(node,90);
    print(node);
    
 

  
}