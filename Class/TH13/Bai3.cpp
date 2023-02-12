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
    //Move head to new node
    head= new_node;
    return head;
}
void printReverse(Node* head)
{
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->value << " ";
}
int main()
{
    Node* head = NULL;
    head=insertHead(head,6);
    head=insertHead(head,4);
    head=insertHead(head,2);
    head=insertHead(head,5);
    head=insertHead(head,3);
    head=insertHead(head,1);
    print(head);
    cout<<endl;
    printReverse(head);
    return 0;
}