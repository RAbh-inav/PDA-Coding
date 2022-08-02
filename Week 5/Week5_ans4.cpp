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

node* rotate(node* head,int count){
    if(head==NULL){
        return NULL;
    }
    node *res_head,*tmp_head=head,*temp=head;
    for(int i=1;i<count;i++){
        temp = temp->next;
    }
    res_head = temp->next;
    temp->next = NULL;
    temp = res_head;
    while(temp->next)
        temp = temp->next;
    temp->next = tmp_head;
    return res_head;
}

int main()
{
    node* head = NULL;
    node* temp;
    node* temp1;
    for(int i=1;i<=9;i++){
        head = Insert(head,i*5);
    }
    temp=head;
    cout<<"Original linked list\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    head = rotate(head,4);
    temp1=head;
    cout<<"\nLinked list after rotation\n";
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    return 0;
}
