#include <bits/stdc++.h>
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
void removeDupicates(Node *head)
{
    Node *curr = head;
    while(curr!=NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            struct Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else curr = curr->next;
    }
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = new Node(2);
    Node *temp = new Node(2);
    Node *temp1 = new Node(3);
    Node *temp2 = new Node(4);
    Node *temp3 = new Node(5);
    Node *temp4 = new Node(5);
    head->next = temp;
    temp->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = NULL;
    printList(head);
    removeDupicates(head);
    printList(head);
    return 0;
}