#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node *left,*right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};
//InOrder Traversal
void inOrder(Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout << (root->key) << " ";
        inOrder(root->right);
    }
    
}



int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(25);
    cout << "InOrder Traversal : " ;
    inOrder(root);
    cout << endl;
    
    return 0;
}