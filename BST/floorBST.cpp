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

Node *floor(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
            return root;
        else if (root->key > x)
        {
            res = root;
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
        inOrder(root->left);
    cout << root->key << " ";
    if (root->right != NULL)
        inOrder(root->right);
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
    Node *res = floor(root, 8);
    cout << res->key << endl;
    res = floor(root, 13);
    cout << res->key;
    return 0;
}
