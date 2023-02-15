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

void BFS(vector<int> adj[],int v,int s){
    // source is given in this 
    bool visited[v+1];
    for (int i = 0; i < v; i++) visited[i] = false;
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


int main(){
    int v = 5;
    vector<int>  adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,3,4);
    BFS(adj,v,0);
    // print_graph(adj,v);
    return 0;
}