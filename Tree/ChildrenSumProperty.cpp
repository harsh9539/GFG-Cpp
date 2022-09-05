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

bool isSum(Node *root){
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    int sum = 0;
    if(root->left != NULL) {sum += root->left->key;}
    if(root->right != NULL) {sum += root->right->key;}
    return (root->key == sum && isSum(root->left) && isSum(root->right));
}


int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    // root->right->left = new Node(28);
    // root->right->right = new Node(50);
    cout << isSum(root);
    return 0;
}