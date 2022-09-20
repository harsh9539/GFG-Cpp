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

bool isPairSum(Node *root,int sum,unordered_set<int> &s){
    if(root == NULL) return false;
    if(isPairSum(root->left,sum,s) == true) return true;
    if(s.find(sum - root->key) != s.end()) return true;
    else s.insert(root->key);
    return isPairSum(root->right,sum,s);
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(20);
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(30);
    root->right->right->right = new Node(25);
    unordered_set<int> s;
    cout << isPairSum(root,33,s);
    return 0;
}