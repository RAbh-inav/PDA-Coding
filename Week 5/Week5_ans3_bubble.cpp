#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    struct Node* next;
} Node;
 
struct Node* swap(struct Node* ptr1, struct Node* ptr2)
{
    struct Node* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}
 
void bubbleSort(struct Node** head, int count)
{
    struct Node** h;
    int i, j, swapped;
 
    for (i = 0; i <= count; i++)
    {
 
        h = head;
        swapped = 0;
 
        for (j = 0; j < count - i - 1; j++)
        {
 
            struct Node* p1 = *h;
            struct Node* p2 = p1->next;
 
            if (p1->data > p2->data)
            {

                *h = swap(p1, p2);
                swapped = 1;
            }
 
            h = &(*h)->next;
        }
 
        if (swapped == 0)
            break;
    }
}
 
void printList(struct Node* n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
 
void insert(struct Node** head, int data)
{
    struct Node* ptr1
        = (struct Node*)malloc(sizeof(struct Node));
 
    ptr1->data = data;
    ptr1->next = *head;
    *head = ptr1;
}
 
int main()
{
    int arr[] = { 9, 5, 72, 20, 1, 2, 80, 38 };
    int list_size, i;
    struct Node* start = NULL;
    list_size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < list_size; i++)
        insert(&start, arr[i]);
    cout <<"Linked list before sorting\n";
    printList(start);
    bubbleSort(&start, list_size);
    cout <<"Linked list after sorting\n";
    printList(start);
 
    return 0;
}
