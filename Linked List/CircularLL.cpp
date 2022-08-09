#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
Node *insertBegin(Node *head,int d){
    Node *temp = new Node(d);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }        
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data  =t;
        return head;
    }
}

void printLL(Node *head){
    if(head == NULL) cout << "Linked List is Empty";
    cout << head->data << "->";
    for (Node *curr = head->next; curr != head; curr = curr->next)
    {
        cout << curr->data << "->";
    }
    cout << "null";
}

int main(){
    Node *head = NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,40);
    head = insertBegin(head,50);
    printLL(head);
    return 0;
}