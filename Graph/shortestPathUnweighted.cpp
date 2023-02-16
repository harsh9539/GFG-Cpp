#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print_edge(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (auto x : adj[i])
            cout << x << " ";
        cout << endl;
    }
}

void shortestPath(vector<int> adj[],int v,int s = 0){
    int dist[v];
    bool visited[v];
    queue<int> q;
    for(int i = 0;i<v;i++) visited[i] = false;
    for(int i = 0;i<v;i++) dist[i] = INT_MAX;
    dist[s] = 0;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for (auto x:adj[u])
        {
            if(visited[x] == false){
                dist[x] = dist[u] + 1;
                visited[x] = true;
                q.push(x);
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << dist[i] << " ";
    }
    
}


int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    // print_edge(adj, v);
    shortestPath(adj,v);
    return 0;
}