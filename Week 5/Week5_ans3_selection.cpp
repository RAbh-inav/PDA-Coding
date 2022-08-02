#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
 
class LinkedlistIS {
 
public:
    Node* head;
 
    void push(int data)
    {
        Node* newnode = new Node(data);
        newnode->next = head;
        head = newnode;
    }
    void printlist(Node* head)
    {
        while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
        }
    }
    void selectionSort(Node* head)
    {
        Node* temp = head;
    
        // Traverse the List
        while (temp) {
            Node* min = temp;
            Node* r = temp->next;
    
            // Traverse the unsorted sublist
            while (r) {
                if (min->data > r->data)
                    min = r;
    
                r = r->next;
            }
    
            // Swap Data
            int x = temp->data;
            temp->data = min->data;
            min->data = x;
            temp = temp->next;
        }
}
};


int main()
{
    LinkedlistIS list;
    list.head = NULL;
    list.push(7);
    list.push(29);
    list.push(45);
    list.push(33);
    list.push(107);
    list.push(13);
    list.push(68);
    cout << "Linked List before sorting" << endl;
    list.printlist(list.head);
    cout << endl;
    list.selectionSort(list.head);
    cout << "Linked List After sorting" << endl;
    list.printlist(list.head);
}
