#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int key;
    Node *right,*left;
    Node(int val){
        key = val;
        left = right = NULL;
    }
};

void printLevel(Node *root){
    if(root == NULL) return;
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if(curr->left!= NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
    }

}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(25);
    printLevel(root);
    return 0;
}