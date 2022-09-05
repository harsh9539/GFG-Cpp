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

Node *insertBST(Node *root,int x){
    Node *temp = new Node(x);
    Node *parent = NULL,*curr = root;
    while(curr!=NULL){
        parent = curr;
        if(curr->key <x) curr = curr->right;
        else if(curr->key > x) curr = curr->left;
        else return root;
    }
    if(parent == NULL) return temp;
    if(parent->key>x) parent->left = temp;
    else parent->right = temp;
    return root;
}


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
    root = insertBST(root,12);
    inOrder(root);
    return 0;
}