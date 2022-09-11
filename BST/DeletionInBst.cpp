#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int key;
    Node *left, *right;

    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};
Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
Node *delNode(Node *root, int x)
{
    if (root == NULL)
        return root;
    if (root->key > x)
        root->left = delNode(root->left, x);
    else if (root->key < x)
        root->right = delNode(root->right, x);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = delNode(root->right, succ->key);
        }
    }
    return root;
}
void inOrder(Node *root){
    if(root == NULL) return;
    if(root->left!= NULL) inOrder(root->left);
    cout << root->key << " ";
    if(root->right!= NULL) inOrder(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    root->right->left = new Node(12);
    root->right->right = new Node(50);
    inOrder(root);
    cout << endl;
    root = delNode(root,12);
    inOrder(root);
    return 0;
}