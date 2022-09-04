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

int sizeOfTree(Node *root){
    if (root == NULL) return 0;
    else return (1+sizeOfTree(root->left)+sizeOfTree(root->right));
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(25);
    root->right->left = new Node(28);
    root->right->right = new Node(50);
    cout << sizeOfTree(root);
    return 0;
}