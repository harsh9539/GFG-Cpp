#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print_graph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (auto X : adj[i])
        {
            cout << X << " ";
        }
        cout << endl;
    }
}

// Undirected or conncted graph also source node is given
void DFSRec(vector<int> adj[],int s,bool visited[]){
    visited[s] = true;
    cout << s << " ";
    for(auto x:adj[s]){
        if(visited[x] == false) DFSRec(adj,x,visited);
    }
}

void DFS(vector<int> adj[],int v,int s = 0){
    bool visited[v];
    for(int i = 0;i<v;i++) visited[i] = false;
    DFSRec(adj,s,visited);
}



int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    // addEdge(adj,2,4);
    // addEdge(adj,3,4);
    addEdge(adj, 4, 5);
    DFS(adj, v);
    // print_graph(adj,v);
    return 0;
}