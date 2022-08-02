#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

node *Insert(node* head,int data){
    node* newn = new node();
    newn->data = data;
    newn->next = NULL;
    if(head==NULL){
        head = newn;
    }
    else{
        node* temp = new node();
        temp=head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newn;
    }
    return head;
}

node *Delete(node* head,int data){
    if(head==NULL){
        cout<<"Empty Linked List";
        return NULL;
    }
    else{
        node* temp=head,*temp1;
        while(temp!=NULL && temp->next->data!=data){
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = temp->next->next;
        free(temp1);
    }
    return head;
}

void Search(node* head,int data){
    if(head==NULL){
        cout<<"Empty Linked List";
        return;
    }
    else{
        node* temp=head;
        while(temp!=NULL && temp->data!=data){
            temp = temp->next;
        }
        if(temp) cout<<"\nElement Found";
        else cout<<"\nElement Not Found";
    }
}

int main()
{
    node* head = NULL;
    node* temp;
    node* temp1;
    for(int i=1;i<=5;i++){
        head = Insert(head,i);
    }
    temp=head;
    cout<<"Linked list after insertion\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\nLinked list after deletion\n";
    Delete(head,3);
    temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    cout<<"\nSearching elements in linked list\nA)3\nB)5";
    Search(head,3);
    Search(head,5);
    return 0;
}
