#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *revList(Node *head)
{
    
    // vector<int>  arr;
    // for(Node *curr = head; curr != NULL;curr = curr->next){
    //     arr.push_back(curr->data);
    // }
    // for(Node *curr = head; curr != NULL;curr = curr->next){
    //     curr->data = arr.back();
    //     arr.pop_back();
    // }
    

    // 2nd Method
    Node *curr = head,*prev = NULL;
    while(curr!=NULL){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}
void show(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " "; // ((*ptr).info) This syntax will also work same
        ptr = ptr->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    head = revList(head);
    show(head);

    return 0;
}