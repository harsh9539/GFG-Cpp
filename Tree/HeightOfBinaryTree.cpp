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

int heightTree(Node *root){
    if(root == NULL) return 0;
    return max(heightTree(root->left),heightTree(root->right))+1;
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(25);
    heightTree(root);
    return 0;
}
