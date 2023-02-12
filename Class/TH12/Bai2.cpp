#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node *next;
};
Node* insertHead(Node* head, int value)
{
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = head;
    // Move head to new node
    head= new_node;
    return head;
}
//Cach 1
bool compareLists(Node* headA, Node* headB)
{
    while (headA != NULL && headB != NULL) 
    {
        if (headA->value != headB->value)
            return false;
        headA = headA->next;
        headB = headB->next;
    }
    return (headA == NULL && headB == NULL);
}
// Cach 2 (De quy)
/*
bool compareLists(Node* headA, Node* headB)
{
    if (headA == NULL && headB == NULL) 
        return 1;
    else if (headA == NULL || headB == NULL)
        return 0;
    if (headA->value == headB->value) 
        return compareLists(headA->next, headB->next);
    else return 0;
}
*/
int main()
{
    Node* head1 = NULL;
    head1=insertHead(head1,4);
    head1=insertHead(head1,1);
    head1=insertHead(head1,3);
    head1=insertHead(head1,2);
    Node* head2 = NULL;
    head2=insertHead(head2,4);
    head2=insertHead(head2,1);
    head2=insertHead(head2,3);
    head2=insertHead(head2,2);
    cout << compareLists(head1, head2);
    return 0;
}