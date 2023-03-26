#include <iostream>
#include <vector>

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
Node* concat(vector<Node*> heads)
{
    Node* headCombined =NULL;
    //vector dao nguoc
    vector<Node*> reverse_heads;
    while (!heads.empty())
    {
        reverse_heads.push_back(heads.back());
        heads.pop_back();
    }
    while (!reverse_heads.empty())
    {
        Node* current=reverse_heads.back();
        while (current!=NULL)
        {
            Node* new_node = new Node();
            new_node->value = current->value;
            new_node->next = NULL;
            if(headCombined == NULL) 
                headCombined= new_node;
            else 
            {
                Node* temp = headCombined;
                while(temp->next != NULL)
                    temp = temp->next;
                temp->next = new_node;
            }
            current=current->next;
        }
        reverse_heads.pop_back();
    }
    return headCombined; 
}
int main()
{
    Node* head1 = NULL;
    head1=insertHead(head1,3);
    head1=insertHead(head1,2);
    head1=insertHead(head1,1);
    Node* head2 = NULL;
    head2=insertHead(head2,6);
    head2=insertHead(head2,5);
    head2=insertHead(head2,4);
    print(head1);print(head2);
    cout<<endl;
    vector<Node*> heads;
    heads.push_back(head1);
    heads.push_back(head2);
    Node* headCombined = concat(heads);
    print(headCombined);
    return 0;
}