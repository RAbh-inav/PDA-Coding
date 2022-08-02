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

node* reverse(node* head){
    if(head==NULL|| head->next==NULL){
        return head;
    }

    node*rev= reverse(head->next);
    head->next->next= head ;
    head->next=NULL;
    return rev;

}

int main()
{
    node* head = NULL;
    node* temp;
    node* temp1;
    for(int i=1;i<=9;i++){
        head = Insert(head,i);
    }
    temp=head;
    cout<<"Original linked list\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\nReversed linked list\n";
    head = reverse(head);
    temp1= head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    return 0;
}
