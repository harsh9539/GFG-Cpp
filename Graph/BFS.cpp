#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print_graph(vector<int> adj[],int v){
    for (int i = 0; i < v; i++)
    {
        for(auto X:adj[i]){
            cout << X << " ";
        }
        cout << endl;
    }
    
}

// void BFS(vector<int> adj[],int v,int s){
//     // source is given in this 
//     bool visited[v+1];
//     for (int i = 0; i < v; i++) visited[i] = false;
//     queue<int> q;
//     visited[s] = true;
//     q.push(s);
//     while (!q.empty())
//     {
//         int u = q.front();
//         q.pop();
//         cout << u << " ";
//         for(auto x:adj[u]){
//             if(visited[x] == false){
//             visited[x] = true;
//             q.push(x);
//             }
//         }
//     }
// }

void BFS(vector<int> adj[],int s,bool visited[]){
    // when no source is given and even if our graph is broken
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(auto x:adj[u]){
            if(visited[x] == false){
            visited[x] = true;
            q.push(x);
            }
        }
    }
}

void BFSdis(vector<int> adj[],int v){
    bool visited[v+1];
    for (int i = 0; i < v; i++) visited[i] = false;
    for (int i = 0; i < v; i++)
    {
        if(visited[i] == false) BFS(adj,i,visited);
    }
    
}


int main(){
    int v = 6;
    vector<int>  adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    // addEdge(adj,2,4);
    // addEdge(adj,3,4);
    addEdge(adj,4,5);
    BFSdis(adj,v);
    // print_graph(adj,v);
    return 0;
}