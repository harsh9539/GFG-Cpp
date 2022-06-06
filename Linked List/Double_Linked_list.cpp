#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
class DLL
{
    Node *start;
    Node *end;

public:
    DLL()
    {
        start = NULL;
        end = NULL;
    }
    // Functions of Doubly Linked List
    void create_beg(){
        int num;
        cin >> num;
        while(num!= -1){
            Node *nn = new Node;
            nn -> data = num;
            nn -> next = end;
            nn->prev = start;
            start  = nn;
            cin >> num;
        }
    }
    void show(){
        Node *ptr = start;
        while(ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->prev;
        }
    }
    
};
int main()
{
    DLL l1;
    l1.create_beg();
    l1.show();
    return 0;
}