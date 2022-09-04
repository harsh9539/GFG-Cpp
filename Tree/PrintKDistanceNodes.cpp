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
void printKDist(Node *root ,int k){
    if(root == NULL) return;
    if(k == 0) cout << root->key << " ";
    else{
        printKDist(root->left,k-1);
        printKDist(root->right,k-1);
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(25);
    printKDist(root,1);
    return 0;
}