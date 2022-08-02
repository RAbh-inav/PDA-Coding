#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
void push(Node** head_ref, int new_data)
{

    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

Node* removeDuplicates(Node* list)
{
    Node* current = list;
    Node* next_next;
    if (current == NULL)
     return current;
    while (current->next != NULL)
    {
    if (current->data == current->next->data)
    {     
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
    }
    else 
        current = current->next;
    }
    return list;
}
int main()
{
    Node* Duplicatelesslist = NULL;
    Node* list = NULL;
    push(&list, 11);
    push(&list, 9);
    push(&list, 5);
    push(&list, 5);
    push(&list, 3);
    push(&list, 3);
    push(&list, 2);
    push(&list, 1);
    push(&list, 1);
    cout<<"Original List is ";
    printList(list);
    Duplicatelesslist=removeDuplicates(list);
    cout << "List without duplicates is ";
    printList(Duplicatelesslist);
    return 0;
}