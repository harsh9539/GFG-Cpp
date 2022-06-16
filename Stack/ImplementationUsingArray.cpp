#include<bits/stdc++.h>
using namespace std;
struct MyStack{
    int *arr;
    int cap,top;
    MyStack(int x){
        cap = x;
        arr = new int[x];
        top =-1;
    }
    //push elements on the top of stack
    void push(int x){
        top++;
        arr[top] = x;
    }
    // pop top elements of stack
    int pop(){
        int res = arr[top];
        top--;
        return res;
    }
    // return the peek element of stack
    int peek(){return (arr[top]);}
    //Size of stack
    int size(){return (top+1);}
    //returns stack is empty or not
    bool isEmpty(){return (top == -1);}
    //show elements in stack
    void show(){
        cout << "elements in stack is : " << " ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    MyStack s(5);
    cout <<"is empty "<< s.isEmpty() << endl;
    cout <<"size of stack " << s.size() << endl;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.show();
    cout <<"size of stack " << s.size() << endl;
    cout <<"peek of stack " << s.peek() << endl;
    s.pop();
    s.show();
    cout <<"size of stack " << s.size() << endl;
    cout <<"peek of stack " << s.peek() << endl;
    return 0;
}