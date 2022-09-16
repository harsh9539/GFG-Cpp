#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *right, *left;
    Node(int val)
    {
        key = val;
        left = right = NULL;
    }
};

Node *cTree(int in[], int pre[], int is, int ie)
{
    static int preIndex = 0;
    if (is > ie)
        return NULL;

    Node *tnode = new Node(pre[preIndex++]);
    if (is == ie)
        return tnode;
    int inIndex;
    for (int i = is; i < ie; i++)
    {
        if (in[i] == tnode->key)
        {
            inIndex = i;
            break;
        }
    }
    tnode->left = cTree(in, pre, is, inIndex - 1);
    tnode->right = cTree(in, pre, inIndex + 1, ie);
    return tnode;
}

void printInorder(Node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->key << " ";

    printInorder(node->right);
}
int main()
{
    Node *root;
    int in[] = {20, 10, 30};
    int pre[] = {10, 20, 30};
    Node *res;
    root = cTree(in, pre, 0, 2);
    printInorder(root);
    return 0;
}
