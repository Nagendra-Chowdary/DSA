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

bool removeLoop(Node *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    // vector<bool> visited(100,0);
    map<Node*,bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if(visited[temp]){
            //I can easily return the node now. but deleting it will be diff(especially ).
            return 1;

        }
        visited[temp]=1;
        temp = temp->next;
    }

        return 0;
    
    
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
    node4->next = node5;
    insertAtNode(node, 9, 8);
    insertAtNode(node, 9, 90);
    insertAtNode(node, 8, 91);
    insertAtNode(node, 9, 7);
    // print(node);
    cout<<removeLoop(node);
    
}