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
Node* convert(Node* head)
{ 
    Node* pA=head;
    Node* pB;
    int count=0;
    for (Node* p=head; p != nullptr;p=p->next) 
        count++;
    int N=count/2;
    int k=0;
    for (Node* p=head; p != nullptr;p=p->next) 
    {
        k++;
        if (k == N+1)
        {
            pB=p;
            break;
        }
    }
    for (int i=1;i<=N;i++)
    {
        Node* nextpA = pA->next;
        Node* nextpB = pB->next;
        pA->next=pB;
        if (i<N)
            pB->next=nextpA;
        pA=nextpA;
        pB=nextpB;    
    }
    return head;
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
    print(convert(head));
    return 0;
}