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

void TopView(Node *root)
{
    map<int, int> mp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (q.empty() == false)
    {
        auto p = q.front();
        Node *curr = p.first;
        int hd = p.second;
        mp[hd] = curr->key;
        q.pop();
        if (curr->left != NULL)
            q.push({curr->left, hd - 1});
        if (curr->right != NULL)
            q.push({curr->right, hd + 1});
    }
    // print the values of map
    for (auto p : mp)
    {
            cout << p.second << " ";
        cout << endl;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    TopView(root);
    return 0;
}