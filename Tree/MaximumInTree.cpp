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

int getMax(Node *root){
    if(root == NULL) return INT_MIN;
    else{
        return max(root->key,max(getMax(root->left),getMax(root->right)));
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
    cout << getMax(root);
    return 0;
}