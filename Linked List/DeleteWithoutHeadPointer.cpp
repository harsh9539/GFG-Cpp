#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deleteNode(Node *head,int data)
    {
       // Your code here
        Node *curr = head;
        while(curr!=NULL){
            if(curr->data == data){
                break;
            }
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->data = temp->data;
        curr->next = temp->next;
        delete(temp);
    }
    void printList(Node *head){
        while(head != NULL){
            cout << head->data << "->";
            head = head->next;
        }cout<<"NULL" << endl;
    }
int main(){
    Node *head = new Node(1);
    Node *temp = new Node(2);
    Node *temp1 = new Node(3);
    Node *temp2 = new Node(4);
    Node *temp3 = new Node(5);
    head->next = temp;
    temp->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = NULL;
    printList(head);
    deleteNode(head,3);
    printList(head);

    return 0;
}