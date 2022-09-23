#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int key;
    Node *left,*right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};

void VTraversal(Node *root){
    map<int,vector<int>> mp;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(q.empty() == false){
        auto p = q.front();
        Node *curr = p.first;
        int hd = p.second;
        mp[hd].push_back(curr->key);
        q.pop();
        if(curr->left!= NULL) q.push({curr->left,hd-1});
        if(curr->right != NULL) q.push({curr->right,hd+1});
    }
    // print the values of map
    for(auto p :mp){
        vector<int> v = p.second;
        for(int x:v) cout << x << " ";
        cout << endl;
    }
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(9);
    root->right->left = new Node(12);
    root->right->right = new Node(50);
    VTraversal(root);
    return 0;
}