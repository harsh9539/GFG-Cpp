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

bool isBst(Node *root){
    static int prev = INT_MIN;
    if(root == NULL) return true;
    if(isBst(root->left) == false) return false;
    if(root->key<=prev) return false;
    prev = root->key;
    return(isBst(root->right));
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    root->right->left = new Node(12);
    root->right->right = new Node(50);
    cout << isBst(root);
    return 0;
}