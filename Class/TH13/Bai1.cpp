#include <iostream>
using namespace std;
int size=0;
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
//Cach 1
/*Node* deleteDuplicates(Node* head)
{
    if(head == NULL)
        return NULL;
    Node * p = head;
    int preVal = head->value;
    while(p->next != NULL)
    {
        if(p->next->value == preVal)
        {
            // remove the node
            Node * pp = p->next;
            p->next = pp->next;
            delete pp;
        }else
        {
            preVal = p->next->value;
            p = p->next; // move forward
        }
    }
    return head;
}*/
// Cach 2
Node* deleteDuplicates(Node* head)
{
    Node* current = head; 
    Node* next_next; 
    if (current == NULL) 
        return NULL; 
    while (current->next != NULL) 
    { 
        if (current->value == current->next->value) 
        {         
            next_next = current->next->next; 
            free(current->next); 
            current->next = next_next; 
        } 
        else
            current = current->next; 
    }
    return head; 
} 
Node* insert(Node* head, int value)
{
    Node* current;
    Node* new_node = new Node();
    new_node->value=value;
    if (head == NULL|| head->value >= new_node->value) 
    {
        new_node->next = head;
        head = new_node;
    }
    else 
    {
        current = head;
        while (current->next != NULL && current->next->value < new_node->value) 
            current = current->next;
        new_node->next = current->next;
        current->next = new_node;
    }
    return head;
}
int main()
{
    Node* head = NULL;
    head=insertHead(head,4);
    head=insertHead(head,3);
    head=insertHead(head,3);
    head=insertHead(head,2);
    head=insertHead(head,2);
    head=insert(head,3);
    print(head);
    cout<<endl;
    head=deleteDuplicates(head);
    print(head);
    return 0;
}