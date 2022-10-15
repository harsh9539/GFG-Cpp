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

int isBalanced(Node *root)
{
    if(root == NULL) return 0;
    int lh = isBalanced(root->left);
    if(lh == -1) return -1;
    int rh = isBalanced(root->right);
    if(rh == -1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return max(lh,rh)+1;
}


int main(){
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    int ans = isBalanced(root);
    if(ans != -1) cout << "Balanced";
    else cout << "Not Balanced";
    return 0;
}