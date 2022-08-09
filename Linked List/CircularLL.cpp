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

// inserting in circular LL
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


Node *insertEnd(Node *head,int d){
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
        temp->data = t; // (*temp).data = t;
        return temp;
    }
}

// Seraching in circular LL
int serachLL(Node *head,int d){
    Node *curr = head;
    int pos = 1;
    if(head == NULL) return -1;
    if(head->data == d) return pos;
    curr = curr->next;
    while(curr != head){
        if(curr->data == d){
            return pos+1;
        }
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

// deleting in circular LL 
Node *deleteHead(Node *head){
    if(head == NULL) return NULL;
    if(head->next == head) {delete head;return NULL;}
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

void printLL(Node *head){
    if(head == NULL) {cout << "Linked List is Empty";return;}
    cout << head->data << "->";
    for (Node *curr = head->next; curr != head; curr = curr->next)
    {
        cout << curr->data << "->";
    }
    cout << "null";
}

int main(){
    Node *head = NULL;
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head = insertEnd(head,50);
    printLL(head);
    deleteHead(head);cout << endl;
    printLL(head);
    cout << endl << serachLL(head,40);
    return 0;
}