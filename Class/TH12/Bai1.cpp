#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node *next;
};
void print(Node* head)
{
    while (head != NULL) 
    {
        cout<< head->value<<" ";
        head = head->next;
    }
}
Node* insertHead(Node* head, int value)
{
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = head;
    // Move head to new node
    head= new_node;
    return head;
}
Node* insertTail(Node* head, int value)
{
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = NULL;
    if(head == NULL) 
        head = new_node;
    else 
    {
        Node* temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }
    return head;
}

Node* deleteNode(Node* head, int pos)
{
    if (pos==0)
    {
        Node *temp=head->next;
        delete head;
        return temp;
    }
    int c=1;
    Node* temp=head->next;
    Node* prev=head;
    while(temp!=NULL)
    {
        if(c==pos)
        {
            prev->next=temp->next;
            delete temp;
            return head;
        }
        prev=temp;
        temp=temp->next;
        c++;
    }
    return head;
}
int getValue(Node* head, int pos)
{
    Node* temprent = head;
    int count = 0;
    while (temprent != NULL) 
    {
        if (count == pos)
            return (temprent->value);
        count++;
        temprent = temprent->next;
    }
    return temprent->value;
}
int main()
{
    Node* head = NULL;
    head=insertHead(head,4);
    head=insertHead(head,1);
    head=insertHead(head,3);
    head=insertHead(head,2);
    print(head);
    return 0;
}