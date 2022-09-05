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

bool search(Node * root,int x){
    while(root!= NULL){
        if(root->key == x) return true;
        else if(root->key < x) root = root->right;
        else root = root->left;
    }
    return false;
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    root->right->left = new Node(12);
    root->right->right = new Node(50);
    cout << search(root,99);
    return 0;
}