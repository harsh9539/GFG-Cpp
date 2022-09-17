#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *right, *left;
    Node(int val)
    {
        key = val;
        left = right = NULL;
    }
};

void PrintSpiral(Node *root){
    if(root == NULL) return;
    queue<Node*> q;
    stack<int> s;
    bool reverse = false;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if(reverse) s.push(curr->key);
            else cout << curr->key << " ";
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
        if(reverse){
            while(s.empty() == false){
                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse;
        
    }
        cout << endl;
    
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->left->left->left = new Node(28);
    root->right->right = new Node(50);
    PrintSpiral(root);
    return 0;
}