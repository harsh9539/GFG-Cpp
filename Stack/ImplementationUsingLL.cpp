#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct MyStack
{
    Node *head;
    int sz;
    MyStack()
    {
        head = NULL;
        sz = 0;
    }
    // push elements on the top of stack
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        sz++;
    }
    // pop top elements of stack

    int pop()
    {
        if (head == NULL)
        {
            return (INT_MAX);
        }
        int res = head->data;
        Node *temp = head;
        head = head->next;
        delete (temp);
        sz--;
        return res;
    }
    // Size of stack
    int size() { return sz; }
    // return the peek element of stack

    int peek()
    {
        if (head == NULL)
        {
            return (INT_MAX);
        }
        return head->data;
    }
    // returns stack is empty or not
    bool isEmpty()
    {
        return (head == NULL);
    }
    // show elements in stack
    void show(){
        if(head == NULL) cout << "No element is present in this stack" << endl;
        Node *curr = head;
        cout << "Elements in Stack is: " ;
        while(curr != NULL){
            cout << (curr)->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main()
{
    MyStack s;
    cout << "is empty " << s.isEmpty() << endl;
    cout << "size of stack " << s.size() << endl;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.show();
    cout << "size of stack " << s.size() << endl;
    cout << "peek of stack " << s.peek() << endl;
    s.pop();
    s.show();
    cout << "size of stack " << s.size() << endl;
    cout << "peek of stack " << s.peek() << endl;
    return 0;
}