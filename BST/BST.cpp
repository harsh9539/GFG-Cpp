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

void inOrder(Node *root){
    if(root == NULL) return;
    if(root->left!= NULL) inOrder(root->left);
    cout << root->key << " ";
    if(root->right!= NULL) inOrder(root->right);
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    root->right->left = new Node(12);
    root->right->right = new Node(50);
    inOrder(root);
    return 0;
}