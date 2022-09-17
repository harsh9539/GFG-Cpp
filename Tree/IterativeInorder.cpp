#include<bits/stdc++.h>
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

void inorderItr(Node *root){
    stack<Node *> st;
    Node *curr = root;
    while(curr!= NULL || st.empty() == false){
        while(curr!= NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top(),st.pop();
        cout << (curr->key) << " ";
        curr = curr->right;
    }
}

int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->left->left->left = new Node(28);
    root->right->right = new Node(50);
    inorderItr(root);
    return 0;
}