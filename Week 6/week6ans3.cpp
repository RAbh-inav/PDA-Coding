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

Node* SortedMerge(Node* first, Node* second)
{
    Node* mergedresult = NULL;
     
    /* Base cases */
    if (first == NULL)
        return(second);
    else if (second == NULL)
        return(first);
     
    /* Pick either a or b, and recur */
    if (first->data <= second->data)
    {
        mergedresult = first;
        mergedresult->next = SortedMerge(first->next, second);
    }
    else
    {
        mergedresult = second;
        mergedresult->next = SortedMerge(first, second->next);
    }
    return(mergedresult);
}

int main()
{
    Node* mergedlist = NULL;
    Node* first = NULL;
    Node* second = NULL;
    push(&first, 11);
    push(&first, 9);
    push(&first, 7);
    push(&first, 5);
    push(&first, 3);
    cout<<"First List is ";
    printList(first);
    push(&second, 12);
    push(&second, 10);
    push(&second, 8);
    push(&second, 6);
    push(&second, 4);
    cout << "Second List is ";
    printList(second);
    mergedlist= SortedMerge(first,second);
    cout << "Merged sorted list is ";
    printList(mergedlist);
    return 0;
}