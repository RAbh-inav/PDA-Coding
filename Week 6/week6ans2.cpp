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
 
Node* addLinkedLists(Node* first, Node* second)
{
    Node* sum = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum1;
    while (first != NULL|| second != NULL) {
        sum1 = carry + (first ? first->data : 0)+ (second ? second->data : 0);
        if(sum1>=10)
            carry=1;
        else
            carry=0;
        sum1 = sum1 % 10;
        temp = newNode(sum1);
        if (sum == NULL)
            sum = temp;
        else
            prev->next = temp;
        prev = temp;
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
 
    if (carry > 0)
        temp->next = newNode(carry);
    return sum;
}
 
Node* reverse(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node* rest = reverse(head->next);
    head->next->next = head;
 
    head->next = NULL;
    return rest;
}   

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node* sum = NULL;
    Node* first = NULL;
    Node* second = NULL;
    push(&first, 7);
    push(&first, 4);
    push(&first, 2);
    push(&first, 9);
    push(&first, 1);
    cout<<"First List is ";
    printList(first);
    push(&second, 2);
    push(&second, 8);
    push(&second, 7);
    push(&second, 1);
    push(&second, 4);
    cout << "Second List is ";
    printList(second);
    first = reverse(first);
    second = reverse(second);
    sum = addLinkedLists(first, second);
    sum = reverse(sum);
    cout << "Sum is ";
    printList(sum);
    return 0;
}