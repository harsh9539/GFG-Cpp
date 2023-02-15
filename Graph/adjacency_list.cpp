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

int main(){
    int v = 4;
    vector<int>  adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    print_graph(adj,v);
    return 0;
}