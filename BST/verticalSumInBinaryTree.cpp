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


void vSumR(Node *root,int hd,map<int,int> &mp){
    if(root==NULL) return;
    vSumR(root->left,hd-1,mp);
    mp[hd] += root->key;
    vSumR(root->right,hd+1,mp);
}

void vSum(Node *root){
    map<int,int> mp;
    vSumR(root,0,mp);
    for(auto sum:mp){
        cout << sum.second << " ";
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
    vSum(root);
    return 0;
}