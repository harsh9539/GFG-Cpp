#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left,*right;
    Node(int x){
        key = x;
        left = NULL;
        right = NULL;
    }
};
int CountLeafNodes(Node *root){
    if(root == NULL) return 0;
    else if(root->left == NULL && root->right == NULL){
        return 1;
    }
    else{
        return CountLeafNodes(root->left)+CountLeafNodes(root->right);
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(25);
    root->right->left = new Node(28);
    root->right->right = new Node(50);
    cout << CountLeafNodes(root);
    return 0;
}