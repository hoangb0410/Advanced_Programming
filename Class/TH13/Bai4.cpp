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
Node* extractNodes(Node* head, int threshold) 
{
    Node* otherHead=NULL;
    while (head != NULL)
    {
        if (head->value<threshold)
        {
            Node* new_node = new Node();
            new_node->value = head->value;
            new_node->next = NULL;
            if(otherHead == NULL) 
                otherHead = new_node;
            else 
            {
                Node* temp = otherHead;
                while(temp->next != NULL)
                    temp = temp->next;
                temp->next = new_node;
            }
        }
        head=head->next;
    }
    return otherHead;
}
int main()
{
    Node* head = NULL;
    head=insertHead(head,4);
    head=insertHead(head,1);
    head=insertHead(head,2);
    head=insertHead(head,3);
    print(head);
    cout<<endl;
    Node* otherHead = extractNodes(head, 3);
    print(otherHead);
    return 0;
}