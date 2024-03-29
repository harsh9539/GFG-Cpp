// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int info;
//     Node *next;
// };

// class LL
// {
//     Node *start;

// public:
//     LL()
//     {
//         start = NULL;
//     }
//     void create_beg();
//     void create_end();
//     void insert_at_beg();
//     void insert_at_end();
//     void show();
//     Node* search(int);
//     // function inside class
//     void insert_after(){
//         int num,key;
//         cout << "Enter the num and key" << endl;
//         cin >> num >> key;
//         Node *ptr;
//         ptr = search(key);
//         if(ptr == NULL) cout << "Element is not present" << endl;
//         else{
//         Node *nn = new Node;
//         nn->info = num;
//         nn->next = ptr->next;
//         ptr->next = nn;
//         }
//     }

// void insert_before(){
//         int num,key;
//         cout << "Enter the num and key" << endl;
//         cin >> num >> key;
//         Node *nn = new Node;
//         Node *ptr,*save;
//         ptr = start;
//         save = NULL;
//         while(ptr!=NULL){
//             if(ptr->info == key){
//                 break;
//             }
//             save = ptr;
//             ptr = ptr->next;
//         }
//         if(ptr == NULL) cout << "Element is not present" << endl;
//         else if(save == NULL) {nn->next = ptr; start= nn;}
//         else{
//         nn->next= ptr;
//         save->next = nn;
//         }
//     }
//     void deletegiven(){
//         {
//         // drawback is if node is the last one then it will become error
//         // Node *x,*given;
//         // x = given->next;
//         // given->info = x->info;
//         // given->next = x->next;
//         // x->next = NULL;
//         // delete(x);
//         }
//         Node *given = start->next->next->next->next->next;
//         cout << given->info<< endl;
//     }
//     int calculateLengthI(){
//         int count = 0;
//         cout<< endl << count << " ";
//         Node *ptr;
//         while(ptr !=NULL){
//             count++;
//             ptr = ptr->next;
//         }
//         cout << count << " ";
//         return count;
//     }
//     int calculateLengthR(Node *p){
//         if(p == NULL){
//             return 0;
//         }
//         else return 1+calculateLengthR(p->next);
//     }
// };
// void LL::create_beg()
// {
//     int num;
//     cin >> num;
//     while (num != -1)
//     {
//         Node *nn = new Node;
//         nn->info = num;
//         nn->next = start;
//         start = nn;
//         cin >> num;
//     }
// }
// void LL::create_end()
// {
//     Node *save;
//     int num;
//     cin >> num;
//     while (num != -1)
//     {
//         Node *nn = new Node;
//         nn->info = num;
//         nn->next = NULL;
//         if(start==NULL){
//             start = nn;
//             save =nn;
//         }
//         else{
//             save->next = nn;
//             save = nn;
//         }
//         cin >> num;
//     }
// }

// void LL::insert_at_beg(){
//     int num;
//     cout << "Enter no to be inserted in beginning";
//     cin >> num;
//     Node *nn = new Node;
//     if(nn==NULL) cout << "Memory Allocation failed";
//     else{
//     nn->info = num;
//     nn->next = start;
//     start = nn;
//     }
// }
// void LL::insert_at_end(){
//     Node *save;
//     int num;
//     cout << "Enter no to be inserted in beginning";
//     cin >> num;
//     Node *nn = new Node;
//     if(nn==NULL) cout << "Memory Allocation failed";
//     else{
//     save->next = nn;
//     save = nn;
//     }
// }
// Node *LL::search(int key){
//     Node *ptr;
//     ptr = start;
//     while(ptr!=NULL){
//         if(ptr->info == key) break;
//         ptr = ptr->next;
//     }
//     return ptr;
// }
// void LL::show()
// {
//     Node *ptr = start;
//     while (ptr != NULL)
//     {
//         cout << ptr->info << " "; // ((*ptr).info) This syntax will also work same
//         ptr = ptr->next;
//     }
// }
// int main()
// {
//     LL L1;

//     L1.create_beg();
//     // L1.create_end();
//     L1.show();
//     // L1.insert_at_beg();
//     // L1.deletegiven();
//     // L1.show();
//     cout << L1.calculateLengthI();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    return temp;
}
Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL) curr=curr->next;
    curr->next = temp;
    return head;
}

void printLL(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL";
}

Node *deleteHead(Node *head){
    if(head == NULL) return NULL;
    else{
        Node *temp = head->next;
        delete(head);
        return temp;
    }
}
Node *deleteTail(Node *head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete(head);
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}
Node *reverseLL(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head, 30);
    head = insertEnd(head, 50);
    head = insertEnd(head, 70);
    head = insertEnd(head, 90);
    head = insertEnd(head, 110);
    // head = deleteHead(head);
    // head = deleteTail(head);
    head = reverseLL(head);
    printLL(head);
    return 0;
}