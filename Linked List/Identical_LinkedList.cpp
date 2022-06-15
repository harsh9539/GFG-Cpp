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
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // code here
    if (head1 == NULL)
        return false;
    if (head2 == NULL)
        return false;
    Node *curr1 = head1, *curr2 = head2;
    cout << "element of curr1 is : " << curr1->data << " ";
    cout << "element of curr2 is : " << curr2->data << endl;
    while (curr1 != NULL || curr2 != NULL)
    {
        // cout << "element of curr1 is : " << curr1->data << " ";
        // cout << "element of curr2 is : " << curr2->data << endl;
        if(curr1 == NULL) return false;
        if(curr2 == NULL) return false;
        if (curr1->data != curr2->data)
        {
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
}
int main()
{
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
    Node *head2 = new Node(1);
    Node *temp22 = new Node(2);
    Node *temp12 = new Node(3);
    Node *temp42 = new Node(4);
    Node *temp32 = new Node(5);
    head2->next = temp22;
    temp22->next = temp12;
    temp12->next = temp42;
    temp42->next = temp32;
    temp32->next = NULL;
    bool ans = areIdentical(head, head2);
    cout << ans;

    return 0;
}