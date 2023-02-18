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
bool DetectCycle(vector<int> adj[],int s, bool visited[], int parent)
{
    visited[s] = true;
    for (auto u : adj[s])
    {
        if (visited[u] == false){
            if (DetectCycle(adj,u, visited, s) == true)
                return true;
        }
            else if (u != parent)
                return true;
    }
    return false;
}

bool DFS(vector<int> adj[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
            if (DetectCycle(adj, i,visited, -1) == true)
                return true;
    }
    return false;
}

int main()
{
    int v = 4;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 3, 2);
    // addEdge(adj, 1, 3);
    // addEdge(adj, 2, 3);
    // addEdge(adj, 2, 4);
    // addEdge(adj, 3, 4);
    // addEdge(adj, 4, 5);
    cout << DFS(adj, v);
    // print_graph(adj,v);
    return 0;
}



